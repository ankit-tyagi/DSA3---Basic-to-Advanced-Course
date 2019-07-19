#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int diffinbits(int a)
{
    int count =0;
    while(a)
    {
        count += a & 1;
        a = a>>1;
    }
    return count;
}

int bitstoflip(int a, int b)
{
    return (diffinbits(a^b));
}

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int a,b;
         cin>>a>>b;
         cout<<bitstoflip(a,b)<<endl;
     }
	//code
	return 0;
}