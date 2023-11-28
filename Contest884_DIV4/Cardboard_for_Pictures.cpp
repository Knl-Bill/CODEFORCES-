#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,c,y,x,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        vector<long long> v(n);
        x=0;y=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            y += v[i]*v[i];
            x += v[i];
        }
        y-=c;
        w = ((-x/n) + sqrt((x*x/(n*n)) - y/n))/2;
        cout<<w<<"\n";
    }
    return 0;
}