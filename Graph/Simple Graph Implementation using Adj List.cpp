#include<bits/stdc++.h>

using namespace std;

void addedge(vector <int> adj[], int v, int u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void print(vector <int> adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        cout << "\n Adjacency list of vertex "<<i<< "\n head "; 
        for(vector <int>:: iterator x = adj[i].begin(); x!= adj[i].end();x++)
            cout<<"->"<<*x;
        cout<<endl;
        
    }
}

int main()
{
    int v;
    cin>>v;
    vector<int> adj[v];
    int a,b,e;
    cout<<"enter the number of edges";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        addedge(adj,a,b);
    }

    print(adj,v);
    return 0;
}