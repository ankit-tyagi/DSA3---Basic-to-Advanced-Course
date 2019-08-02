#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        long x,y,n;
        cin>>x>>y>>n;
        x = abs(x);
        y = abs(y);
        n = abs(n);
        x = x+y;
        if((n-x)%2 == 0 && (n-x)>-1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
     }
	//code
	return 0;
}