#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,b,k,ta,fa,tb,fb;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        cin>>ta>>fa>>tb>>fb;
        int ans = 0;
        if(ta!=tb)
        {
            if(fa>b)
            {   ans+=(fa-b);
                fa = b;
            }
            else if(fa<a)
            {
                ans+=(a-fa);
                fa = a;
            }
        }
        ans+=abs(ta-tb)+abs(fa-fb);
        cout<<ans<<"\n";
    }
    return 0;
}