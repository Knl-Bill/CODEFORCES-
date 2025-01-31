#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll q,a,b,i,j,n;
    map<ll,ll> m;
    bool check;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        if(a==1)
        {
            m[1<<b]++;
            for(auto it = m.begin(); it!=m.end(); it++)
            {
                if(it->second>1)
                {
                    n = it->second/2;
                    ll temp = 2*it->first;
                    m[temp] += n;
                    it->second -= 2*n;
                }
            }
        }
        else{
            check=true;
            for(i=0;i<40;i++)
            {
                if(b&(1<<i))
                {
                    auto it = m.find(1<<i);
                    if(it==m.end())
                    {
                        check=false;
                        break;
                    }
                }
            }
            if(check)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    m.clear();
    return 0;
}