#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>&a, pair<int,int>&b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n,k,check=0,sum=0;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        v[i].first *= -1;
    }
    sort(v.begin(),v.end(),comparator);
    for(int i=0;i<n;i++)
    {
        if(v[i].first == v[k-1].first and v[i].second == v[k-1].second)
        {
            sum++;
            check = 1;
        }
        else if(check==1 and v[i]!=v[k-1])
            break;
    }
    cout<<sum<<"\n";
    return 0;
}