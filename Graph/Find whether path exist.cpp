#include<iostream>
#include<bits/stdc++.h>

#define N 22

bool isrechable(int a[][N], int n, int i, int j, int x, int y)
{
    if(i==x && j==y)
        return true;
    if(i>=0 && i<n && j>=0 && j<n)
    {
        if(a[i][j] == 3)
            return false;
        else
            return(isrechable(a,n,i+1,j,x,y) || isrechable(a,n,i,j+1,x,y) || isrechable(a,n,i-1,j,x,y) || isrechable(a,n,i,j-1,x,y));
    }
    return false;
    
}

using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n][n];
         int sx,sy,dx,dy;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>a[i][j];
                 if(a[i][j] == 1)
                 {
                     sx = i;
                     sy = j;
                 }
                 if(a[i][j] == 2)
                 {
                     dx = i;
                     dy = j;
                 }
             }
         }
         if(isrechable(a,n,sx,sy,dx,dy))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
     }
	//code
	return 0;
}