#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int findsum(vector <int>adj[], int v)
{
    int sum=0;
    for(int i=0;i<v;i++)
    {
        sum=sum+adj[i].size();
    }
    return sum;
}

int main()
 {  int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        vector<int> adj[v];
        int a,b;
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            addedge(adj,a,b);   
        }
        cout<<findsum(adj,v)<<endl;
    }
	//code
	return 0;
}