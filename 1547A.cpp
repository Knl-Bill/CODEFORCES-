#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,xa,xb,ya,yb,xf,yf,ans;
    cin>>t;
    while(t--)
    {
        cin>>xa>>ya; cin>>xb>>yb; cin>>xf>>yf;
        ans = abs(xa - xb) + abs(ya - yb);
        if((xa == xf and xb == xf and ((ya<yf and yf<yb) or (yb<yf and ya>yf))) or (ya == yf and yb == yf and ((xa<xf and xb>xf) or (xb<xf and xa>xf))))
        {
            ans += 2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}