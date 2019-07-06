//The algorithm is based on below facts.
//If we subtract smaller number from larger (we reduce larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
//Now instead of subtraction, if we divide smaller number, the algorithm stops when we find remainder 0.
//LCM(a, b) = (a x b) / GCD(a, b) 
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b;
        cin>>a>>b;
        long c= gcd(a,b);
        cout<<(a*b)/c<<" "<<c<<endl;
    }
    return 0;
}