
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int multiplicationUnderModulo(long long,long long);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007;
    a = a%M;
    b = b%M;
    return (a*b)%M;
    //your code here
}