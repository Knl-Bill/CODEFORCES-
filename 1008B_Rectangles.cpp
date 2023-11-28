#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool check = true;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    vector<int> ans(n);
    ans[0] = max(v[0].first,v[0].second);
    for(int i=1;i<n;i++)
    {
        if(v[i].first > ans[i-1] and v[i].second <= ans[i-1])
        {
            ans[i] = v[i].second;
        }
        else if(v[i].first <= ans[i-1] and v[i].second > ans[i-1])
        {
            ans[i] = v[i].first;
        }
        else if(v[i].first <= ans[i-1] and v[i].second <= ans[i-1])
        {
            ans[i] = max(v[i].first,v[i].second);
        }
        else{
            check = false;
            break;
        }
    }
    if(check)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
