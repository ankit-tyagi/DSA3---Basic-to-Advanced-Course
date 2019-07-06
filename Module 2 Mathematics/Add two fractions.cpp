#include<bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2,
                 int den2);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);
    }
}

int gcd(int a, int b)
{   
    if(a==0)
        return b;
    return gcd(b%a,a);
}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
int num3,den3;
int c = 0;
c = gcd(den1,den2);
den3 = (den1*den2)/c;
num3 = (num1)*(den3/den1) + (num2)*(den3/den2); 
c = gcd(num3, den3);
num3 = num3/c;
den3 = den3/c;
cout<<num3<<"/"<<den3<<endl;
//Your code here
 }