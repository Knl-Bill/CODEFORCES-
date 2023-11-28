#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a!=0)
        return gcd(b%a,a);
    return b;
}
int main()
{
    int t,n;
    cin>>t;
    vector<int> v;
    multimap<int,int> index;
    vector<int> order;
    int minim = INT_MAX;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        minim = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            minim = min(minim,v[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%minim==0)
            {
                index.insert({v[i],i});
                order.push_back(i);
            }
        }
        map<int,int> :: iterator it = index.begin();
        int i=0;
        for(it;it!=index.end();it++)
        {
            v[order[i++]] = it->first;
        }
        bool check = 1;
        for(int i=1;i<n;i++)
        {
            if(v[i] < v[i-1])
            {
                check=0;
                cout<<"NO\n";
                break;
            }
        }
        if(check)
            cout<<"YES\n";
        v.clear();
        index.clear();
        order.clear();
    }
    return 0;
}