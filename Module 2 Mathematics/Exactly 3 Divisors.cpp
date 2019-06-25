
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
int exactly3Divisors(int N)
{
    bool isprime[N+1];
    memset(isprime, true, sizeof(isprime));
    for(int i=2;i*i<=N;i++)
    {
        if(isprime[i] == true)
        {
            for(int j=i*i;j<=N;j+=i)
                isprime[j] = false;
        }
    }
    
    int count = 0;
    
    for(int i=2;i*i<=N;i++)
    {
        if(isprime[i] == true)
            count++;
    }
    return count;
    
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
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
