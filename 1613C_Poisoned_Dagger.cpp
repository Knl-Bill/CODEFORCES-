#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,h,k,i;
    cin>>t;
    vector<long long> v;
    multimap<long long,long long> ord;
    while(t--)
    {
        cin>>n>>h;
        v.resize(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(i>0)
                ord.insert({v[i] - v[i-1], 1});
        }
        k = ceil(static_cast<long double>(h)/n);
        for(auto x : ord)
        {
            if(x.first < k)
            {
                h -= x.first;
                n -= 1;
                k = ceil(static_cast<long double>(h)/n);
            }
            else   
                break;
        }
        cout<<k<<'\n';
        v.clear(); ord.clear();
    }
    return 0;
}