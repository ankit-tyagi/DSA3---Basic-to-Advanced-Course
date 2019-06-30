//using DFS to solve the problem

#include<bits/stdc++.h>

using namespace std;

void dfs(int x, vector<int> adj[], bool vis[], int n)
{
    //cout<<"inside the loop "<<x<<" times";
    vis[x] = true;
    for(int i=0; i< adj[x].size();i++)
    {
        if(vis[adj[x][i]] == false)
        {
            //vis[adj[x][i]] = true;
            dfs(adj[x][i], adj, vis, n);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        v--;u--;    //they are giving value from 1 instead from 0
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    bool vis[n];
    memset(vis,false,sizeof(vis));
    int x;
    cin>>x;
    x--;
    dfs(x,adj, vis, n);
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(vis[i] == false)
            count++;
    }
    cout<<count;
    return 0;
}