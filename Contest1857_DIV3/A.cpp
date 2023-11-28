#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ev,od;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ev=0;
        od=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
                ev++;
            else
                od++;
        }
        if((ev%2==0 and od%2==0) or (ev%2!=0 and od%2==0))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}