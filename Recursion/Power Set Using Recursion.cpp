
//Initial Template for C++
// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;



/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
void storePermutations(vector<string> &res, string s, int index, string curr){
    if(index == s.length()){
        res.push_back(curr);
        return;
    }
    
    storePermutations(res, s, index+1, curr);
    storePermutations(res, s, index+1, curr+s[index]);
}

vector <string> powerSet(string s){
    vector<string> result;
    storePermutations(result, s, 0, "");
    return result;
}





//Position this line where user code will be pasted.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }
return 0;
} 
