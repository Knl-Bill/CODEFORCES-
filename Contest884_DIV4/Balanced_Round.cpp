#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=0,m=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i] <= k)
                m++;
            else
                m=0;
            ans = max(ans,m);
        }
        cout<<n-(ans+1)<<"\n";
    }
    return 0;
}