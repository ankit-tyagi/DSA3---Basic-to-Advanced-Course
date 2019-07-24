// Kadane’s Algorithm

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int final_sum = a[0];
        int sum_so_far = 0;
        for(int i=0;i<n;i++)
        {
            sum_so_far = sum_so_far + a[i];
            if(sum_so_far > final_sum)
                final_sum = sum_so_far;
            if(sum_so_far < 0 )
                sum_so_far = 0;
        }
        cout<<final_sum;
    }

    return 0;
}