
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;




/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
int median(int A[],int N)
{
    
    sort(A,A+N);
    if(N%2==0)
    {
        N--;
        return ((A[N/2] + A[(N/2) +1])/2);
    }
    else
    {
        return (A[N/2]);
    }
    
    //your code here
    //If median is in fraction then convert it to integer and return
}
int mean(int A[],int N)
{
    int result=0;
    for(int i=0;i<N;i++)
        result = result+A[i];
    result = result/N;
    return result;
    //your code here
}








//Position this line where user code will be pasted.
int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}

