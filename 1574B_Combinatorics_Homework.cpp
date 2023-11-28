#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2]>>m;
        int a = v[0]+v[1]+v[2]-3;
        sort(v.begin(),v.end());
        v[2]-=v[0];
        int mx = max(v[1],v[2]);
        v[1]-=mx;
        v[2]-=mx;
        int b = v[0]+v[1]+v[2]-3;
        if(m<=a and m>=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}