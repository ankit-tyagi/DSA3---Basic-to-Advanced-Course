#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sortin (int arr[], int n)
{
    int l,m,h;
    l=m=0;
    h=n-1;
    while(m<=h)
    {
        switch(arr[m])
        {
            case 0:
                swap(arr[m++],arr[l++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(arr[m],arr[h--]);
                break;
        }
    }
}

using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         sortin(a,n);
         for(int i=0;i<n;i++)
         {
             cout<<a[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}