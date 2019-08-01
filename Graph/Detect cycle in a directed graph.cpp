
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

bool dfs(int s, vector<int> adj[], bool vis[], bool restack[], int PNode)
{
    bool res = false;
    vis[s] = true;
    restack[s] = true;
    if(s == PNode)
        return true;
    for(int i=0;i<adj[s].size();i++)
    {
        /*if(vis[adj[s][i]] == true && adj[s][i] == PNode)
        {
            continue;
        }
        if(vis[adj[s][i]] == true)
            return true;*/
        
        if(restack[adj[s][i]] == true)
            return true;
        
        if(vis[adj[s][i]] == false)
        {
            if(dfs(adj[s][i],adj,vis,restack,s))
                return true;
        }
    }
    restack[s]=false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int previousnode;
    bool vis[V], restack[V];
    for(int i=0;i<V;i++)
    {    vis[i] = false; restack[i] = false;}
    for(int i=0;i<V;i++)
    {
        if(vis[i] == false)
            if(dfs(i,adj,vis,restack,-1))
                return true;
    }
    return false;
    // Your code here
}



int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}
