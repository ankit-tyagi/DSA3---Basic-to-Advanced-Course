
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
int sumUnderModulo(long long,long long);
//Position this line where user code will be pasted.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    a = a%M;
    b = b%M;
    return (a+b)%M;
    //your code here
}