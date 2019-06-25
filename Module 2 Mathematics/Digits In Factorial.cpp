
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function
int digitsInFactorial(int N)
{
    if(N<0)
        return 0;
    else if(N<=1)
        return 1;
    else
    {
        double digit = 0;
        for(int i=2;i<=N;i++)
        {
            digit = digit + log10(i);
        }
        return (floor)(digit) +1;
    }
    //Your code here
}






//Position this line where user code will be pasted.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}


