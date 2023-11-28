#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long long ans;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ans = 0;
        for(int i=1;i<n;i++)
        {
            ans += max(v[i-1]-v[i],0);
        }
        cout<<ans<<"\n";
        v.clear();
    }
    return 0;
}