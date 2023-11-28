#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a,b,n,m,space;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        if((a+b >= n+m) and (m <= min(a,b)))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}