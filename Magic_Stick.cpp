#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x==1 and y!=1) or (x<=3 and y>3))
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}