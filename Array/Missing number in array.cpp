#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,a=0;
         int k=0,sum=0;
         cin>>n;
         /*bool flag = false;
         for(int i=1;i<n;i++)
         {
             cin>>a;
             if((a!=i) && flag == false)
             {
                k=i;
                flag = true;
             }
         }
         if(k == INT_MAX)
            cout<<n<<endl;
        else
             cout<<k<<endl;*/
             
        for(int i=1;i<n;i++)
        {
            cin>>a;
            sum +=a;
            k = k+i;
        }
        k = n + k - sum;
        cout<<k<<endl;
        
     }
	//code
	return 0;
}