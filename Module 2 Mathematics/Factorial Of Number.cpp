
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long factorial (int N)
{
    long long int result = 1;
    if(N==0)
        return 1;
    for(int i=1;i<=N;i++)
    {    result =result*i;}
    return result;
    //Your code here
}




int main()
{
    int T,N;
    cin>>T;  //input number of testcases
    while(T--)
    {
        cin>>N; //input n
        cout<<factorial(N)<<endl;
    }
    return 0;
}

