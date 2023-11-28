#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n;
    map<int,int> x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x[a] = i;
    }
    cin>>m;
    vector<int> q(m);
    for(int i=0;i<m;i++)
    {
        cin>>q[i];
    }
    long long v=0,p=0;
    for(int i=0;i<m;i++)
    {
        v += x[q[i]] + 1;
        p += n - x[q[i]];
    }
    cout<<v<<" "<<p<<"\n";
    return 0;
}