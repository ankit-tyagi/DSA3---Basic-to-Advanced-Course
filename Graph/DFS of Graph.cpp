#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.


/*This is a function problem.You only need to complete the function given below*/
/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
void dfs(int s, vector<int> adj[], bool vis[])
{
    cout<<s<<" ";
    vis[s]=true;
    for(int i=0;i<adj[s].size();++i)
    {
        if(vis[adj[s][i]] == false)
            dfs(adj[s][i],adj,vis);
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
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0,g,vis);
        cout<<endl;
    }
}
