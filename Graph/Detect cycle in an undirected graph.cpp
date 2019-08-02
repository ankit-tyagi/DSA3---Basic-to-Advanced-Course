
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

bool dfs(int s, vector<int> adj[], bool visited[], int previous)
{
    visited[s] = true;
    for(int i=0;i<adj[s].size();i++)
    {
        if((visited[adj[s][i]] == true ) && adj[s][i] != previous)
            return true;
        if(visited[adj[s][i]] == false)
        {
            if(dfs(adj[s][i], adj, visited, s))
                return true;
        }
    }
    return false;
}


/*This is a function problem.You only need to complete the function given below*/
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool isCyclic(vector<int> adj[], int V)
{
    int prevnode = -1;
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i] = false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i] == false)
            if(dfs(i,adj,visited,-1))
                return true;
    }
    return false;
   // Your code here
   
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << isCyclic(adj, V)<<endl;
    }
}
