
#include <bits/stdc++.h>
using namespace std;


bool issafe(vector<int> a[],int i,int j,int n,int m,bool vis[1000][1000])
{
    return (i<n&&i>=0&&j<m&&j>=0&&a[i][j]&&!vis[i][j]);
}
void dfs(vector<int> a[],bool vis[1000][1000],int i,int j,int n,int m)
{
   
    // static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    // static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
     vis[i][j]=1;
    //  for(int k=0;k<8;k++)
    //  {
    //      if(issafe(a,i+rowNbr[k],j+colNbr[k],n,m,vis))
    //      dfs(a,vis,i+rowNbr[k],j+colNbr[k],n,m);
    //  }
    if(issafe(a,i+1,j,n,m,vis))
    dfs(a,vis,i+1,j,n,m);
    
     if(issafe(a,i-1,j,n,m,vis))
    dfs(a,vis,i-1,j,n,m);
    
     if(issafe(a,i,j+1,n,m,vis))
    dfs(a,vis,i,j+1,n,m);
    
     if(issafe(a,i,j-1,n,m,vis))
    dfs(a,vis,i,j-1,n,m);
    
     if(issafe(a,i+1,j+1,n,m,vis))
    dfs(a,vis,i+1,j+1,n,m);
    
     if(issafe(a,i+1,j-1,n,m,vis))
    dfs(a,vis,i+1,j-1,n,m);
    
     if(issafe(a,i-1,j+1,n,m,vis))
    dfs(a,vis,i-1,j+1,n,m);
    
     if(issafe(a,i-1,j-1,n,m,vis))
    dfs(a,vis,i-1,j-1,n,m);
    
    
}
int findIslands(vector<int> a[], int n, int m)
{
    int i,j;
   bool vis[1000][1000];
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           vis[i][j]=false;
       }
   }
   int count=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(!vis[i][j]&&a[i][j])
           {
               dfs(a,vis,i,j,n,m);
               count++;
               
           }
       }
   }
      
   return count;
}


//Position this line where user code will be pasted.
int main() {
    
	int T;
	cin>>T;
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		vector<int> A[N];
		for(int i=0;i<N;i++){
		    vector<int> temp(M);
		    A[i] = temp;
		    for(int j=0;j<M;j++){
		        cin>>A[i][j];
		    }
		}
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/