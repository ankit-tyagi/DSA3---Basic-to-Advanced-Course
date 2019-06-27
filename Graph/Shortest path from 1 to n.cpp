#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool bfs(vector<int> adj[], int source, int destination, int v, int predecessor[], int distance[])
{
    list<int> queue;
    bool visited[v];
    for(int i=0;i<v;i++)
    {
        visited[i] = false;
        predecessor[i]=-1;
        distance[i]=INT_MIN;
    }
    predecessor[source] =0;
    visited[source]=true;
    distance[source]=0;

    while(!queue.empty())
    {
        int front = queue.front();
        queue.pop_front();
        for(int i=0;i<adj[front].size();i++)
        {
            if(visited[adj[front][i]] == false)
            {
                visited[adj[front][i]] = true;
                distance[adj[front][i]] = distance[front]+1;
                predecessor[adj[front][i]] = front;

                queue.push_back(adj[front][i]);

                if(adj[front][i] == destination)
                    return true;
                
            }
        }

    }

    return false;
}

void printShortestDistance(vector<int> adj[], int source, int destination , int v)
{
    int predecessor[v];
    int distance[v];
    if(bfs(adj,source,destination,v,predecessor,distance)==false)   
    {
        cout<<"These are not connected";
        return;
    } 
    vector<int> path;
    int crawl = predecessor[crawl];
    path.push_back(crawl);
    while(predecessor[crawl] != -1)
    {
        path.push_back(predecessor[crawl]);
        crawl = predecessor[crawl];
    }

    cout<<"shortedt path is "<<distance[destination];
    for(int i=path.size()-1;i>=0;i--)
    {
        cout<<path[i]<<"  ";
    }
}

int main()
{
    int v=8;
    vector<int> adj[v];

    addedge(adj, 0, 1); 
    addedge(adj, 0, 3); 
    addedge(adj, 1, 2); 
    addedge(adj, 3, 4); 
    addedge(adj, 3, 7); 
    addedge(adj, 4, 5); 
    addedge(adj, 4, 6); 
    addedge(adj, 4, 7); 
    addedge(adj, 5, 6); 
    addedge(adj, 6, 7); 
    int source = 0;
    int destination = 7;
    printShortestDistance(adj, source, destination, v); 
    return 0;
}