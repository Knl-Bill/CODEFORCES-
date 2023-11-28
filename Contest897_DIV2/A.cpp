#include <bits/stdc++.h>
using namespace std;
bool comp1(pair<int,int>&a, pair<int,int>&b)
{
    return a.first > b.first;
}
bool comp2(pair<int,int>&a, pair<int,int>&b)
{
    return a.second < b.second;
}
int main()
{
    int t,n;
    vector<pair<int,int>> v,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        ans.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second = ans[i].second = i;
            ans[i].first = i+1;
        }
        sort(v.begin(),v.end(),comp1);
        for(int i=0;i<n;i++)
        {
            ans[i].second = v[i].second;
        }
        sort(ans.begin(),ans.end(),comp2);
        for(int i=0;i<n;i++)
        {
            cout<<ans[i].first<<" ";
        }
        cout<<"\n";
        v.clear(); ans.clear();
    }
    return 0;
}