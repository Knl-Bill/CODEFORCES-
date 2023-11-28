#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    vector<pair<int,int>> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
            v[i].second += v[i].first-1;
        }
        int k = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(i+(v[i].second - v[i].first + 1) > 0)
            {
                k = min(k,v[i].first-1+(v[i].second - v[i].first)/2);
            }
        }
        cout<<k+1<<'\n';
    }
    return 0;
}
