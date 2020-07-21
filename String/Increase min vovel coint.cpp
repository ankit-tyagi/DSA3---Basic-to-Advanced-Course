#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    
    while(t--) {
    
    string str ;
    cin>>str;

    int freq[5] = {0,0,0,0,0};
    for(int i=0;i<str.length();i++)
    {
    //	cout<<str[i];
        if(str[i]=='a')
        {    freq[0]++;}
        else if(str[i]=='e')
        {    freq[1]++;}
        else if(str[i]=='i')
        {    freq[2]++;}
        else if(str[i]=='o')
        {    freq[3]++;}
        else if(str[i]=='u')
        {    freq[4]++;}
    }

    int n = str.length();
    int totalVoval = 0;
    
    for(int i=0;i<5;i++)
    {
    //	cout<<freq[i]<<" ";
        totalVoval+= freq[i];
    }

    if(totalVoval==0)
    {
        cout<<n;
    }
    else 
    
    {   
        int totaldiff = n-totalVoval;
//        cout<<"total diff"<<totaldiff;
        int totalactivevovalcount = 0;
        for(int i=0;i<5;i++)
        {
            if(freq[i]>0)
                totalactivevovalcount++;
        }
        int vovalarray[totalactivevovalcount];
        for(int i=0,j=0;i<5;i++)
        {
            if(freq[i]>0)
            {
                vovalarray[j]=freq[i];
              //  cout<<"vovalarray"<<j<<"  "<<vovalarray[j]<<endl;
                j++;
            }
        }
       sort(vovalarray,vovalarray+totalactivevovalcount);

        cout<<endl<<"aftersort";
        for(int i=0;i<totalactivevovalcount;i++)
        {
            cout<<"vovalarray"<<i<<" "<<vovalarray[i]<<endl;
        }
       int newdiff = 0;
       int i= 0 ,j=0;
       j=1;
       cout<<"reaching till here"<<"  "<<end;
       
        while(j<totalactivevovalcount && (n-totalVoval)>0)
        {
            
            while(newdiff==0 && j<totalactivevovalcount)
            {
                
                if((vovalarray[j]-vovalarray[i])>0)
                    newdiff = vovalarray[j]-vovalarray[i];
                else
                {
                    j=j+1;
                }
            }
            cout<<"   newdiff   "<<newdiff<<"   j=  "<<j<<"    totalactivevovalcount= "<<totalactivevovalcount<<"  ";
            if(j-1<totalactivevovalcount-1)
            {
                if(totaldiff >= ((j-1)*(vovalarray[j+1]-vovalarray[j])))
                {
                    totaldiff = totaldiff - (j-1)*(vovalarray[j+1]-vovalarray[j]);
                    for(int k=0;k<j;k++)
                    {
                    	
                        vovalarray[k] = vovalarray[j];
                    }
                }
                else
                {
                    newdiff = totaldiff % (j);
                    for(int k=0;k<j;k++)
                    {
                        vovalarray[k] = vovalarray[j]+newdiff;
                    }
                    break;
                }
            }
            else
            {
                newdiff = totaldiff % (j);
                cout<<"  newdiff=   "<<newdiff<<"    ";
                for(int k=0;k<j;k++)
                {
                    vovalarray[k] = vovalarray[j-1]+newdiff;
                	cout<<endl<<" vovalarray[k]  "<<vovalarray[k];
                	
                }
                break;
            }
        }
        cout<< endl << "output"<<endl;
        cout<<vovalarray[0]<<endl;
    //    cout<< endl;

        }
    }

}