#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>&a,pair<int,int>&b)
{
    if(a.first == b.first)
        return a.second>b.second;
    return a.first<b.first;
}
int main()
{
    int t,n,x;
    long long sum=0;
    vector<pair<int,int>> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),comparator);
        x=0;
        sum=0;
        map<int,int> ins;
        set<int> check;
        for(int i=0;i<n;i++)
        {
            if(x<v[i].first and check.count(v[i].first) == 0)
            {
                sum+=v[i].second;
                ins[v[i].first]++;
                x++;
            }
            /*map<int,int>::iterator it = ins.begin();
            while(it->first <= x)
            {
                x-=it->second;
                it->second=0;
                check.insert(it->first);
                ++it;
            }*/
            if(check.count(x)==0)
            {
                int k = x;
                x-=ins[x];
                ins[k]=0;
                check.insert(k);
            }
        }
        cout<<sum<<"\n";
        v.clear();
    }
    return 0;
}