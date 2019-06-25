
//Initial Template for C++
#include<iostream>
using namespace std;



/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
int modInverse(int a, int m)
{
    a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 

    return -1;
    //Your code here
}



//Position this line where user code will be pasted.
int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}

