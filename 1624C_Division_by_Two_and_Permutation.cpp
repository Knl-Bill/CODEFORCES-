#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    vector<int> v,perm,check;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n); perm.resize(n),check.resize(n,0);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
            if(v[i] <= n)
                check[v[i]-1] = 1;
        }
        iota(perm.begin(),perm.end(),1);
        sort(v.begin(),v.end());
        if(perm == v)
            cout<<"YES\n";
        else{
            for(int i=0;i<n;i++)
            {
                if(m[v[i]] > 1 or v[i] > n)
                {
                    int copy = v[i];
                    while(copy>0)
                    {
                        copy/=2;
                        bool c = false;
                        if(copy<=n and check[copy - 1]==0)
                        {
                            check[copy - 1] = 1;
                            m[v[i]]--;
                            c = true;
                            v[i] = copy;
                        }
                        if(c)
                            break;
                    }
                }
            }
            sort(v.begin(),v.end());
            if(v == perm)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        v.clear(); perm.clear(); check.clear();
    }
    return 0;
}