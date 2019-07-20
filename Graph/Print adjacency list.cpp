
#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[], int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<i;
        for(int j=0;j< adj[i].size();j++)
        {
            cout<<"-> "<<adj[i][j];
        }
        cout<<endl;
    }
    // Your code here
}


//Position this line where user code will be pasted.
int main()
{  
   int t;
   cin>>t;
   while(t--)
    {  int v, e;
       cin>>v>>e;
       int a, b;
       vector<int> adj[v];
       for(int i=0;i<e;i++)
       {
 		    cin>>a>>b;
 		    adj[a].push_back(b);
 		    adj[b].push_back(a);
       }
		printGraph(adj, v);
       
     }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// The Graph structure is as folows
// Function to print graph
// adj: array of vectors to represent graph
// V: number of vertices



/*Input:
8 14
0 3
0 1
1 2
1 4
1 5
1 3
2 6
2 4
4 7
5 6
5 2
5 3
5 7
7 1

Its Correct output is:
0-> 3-> 1
1-> 0-> 2-> 4-> 5-> 3-> 7
2-> 1-> 6-> 4-> 5
3-> 0-> 1-> 5
4-> 1-> 2-> 7
5-> 1-> 6-> 2-> 3-> 7
6-> 2-> 5
7-> 4-> 5-> 1 */