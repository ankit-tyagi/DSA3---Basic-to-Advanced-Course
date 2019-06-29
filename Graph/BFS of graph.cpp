#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

void bfs(int s, vector<int> adj[], bool vis[])
{
    queue <int> qu;
    qu.push(s);
    vis[s]=true;
    cout<<s<<" ";
    while(!qu.empty())
    {
        int v = qu.front();
        qu.pop();
        for(int i=0; i<adj[v].size();i++)
        {
            if(vis[adj[v][i]] == false)
            {
                cout<<adj[v][i]<<" ";
                qu.push(adj[v][i]);
                vis[adj[v][i]] = true;
            }
        }
    }
    
    // Your code here
    
}





int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis);
        cout<<endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
