#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<vector<int>> v(n,vector<int>(n));
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>v[i][j];
            }
        }
        if(n%2==0)
        {
            for(i=0;i<(n/2);i++)
            {
                for(j=0;j<n;j++)
                {
                    if(v[i][j] != v[n-i-1][n-j-1])
                        sum++;
                }
            }
        }
        else{
            for(i=0;i<(n/2);i++)
            {
                for(j=0;j<n;j++)
                {
                    if(v[i][j] != v[n-i-1][n-j-1])
                        sum++;
                }
            }
            for(j=0;j<n/2;j++)
            {
                if(v[n/2][j] != v[n/2][n-j-1])
                    sum++;
            }
        }
        if((n%2==0 and k>=sum and (k-sum)%2==0) or (n%2==1 and k>=sum))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}