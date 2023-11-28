#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,ans=0,j,y;
    float x;
    cin>>n>>d;
    int stat = n;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    for(int i=n-1;i>=0;i--)
    {
        x = (float)d/p[i];
        y = d/p[i];
        if(x > (float)y)
        {
            x = static_cast<int>(ceil(x));
        }
        else if(x == (float)y)
        {
            x+=1;
        }
        if(stat >= x)
        {               
            stat-=x;
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}