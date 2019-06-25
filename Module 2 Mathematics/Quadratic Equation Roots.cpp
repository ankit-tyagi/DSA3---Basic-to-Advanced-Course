
//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   if(b*b < 4*a*c)
        cout<<"Imaginary";
    else if(b*b == 4*a*c)
    {
        float value = 0;
        value = b*b - 4*a*c;
        value = sqrt(value);
        value = ((-1 * b) + value)/(2*a);
        cout<<floor(value)<<" "<<floor(value);
    }
    else
    {
        float value = 0;
        value = b*b - 4*a*c;
        value = sqrt(value);
        float value1 = ((-1 * b) + value)/(2*a);
        float value2 = ((-1 * b) - value)/(2*a);
        cout<<floor(value1)<<" "<<floor(value2);
    }
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}





//Position this line where user code will be pasted.
int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}

