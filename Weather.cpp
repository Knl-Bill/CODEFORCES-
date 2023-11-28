#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,i,j;
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>n>>k;
        vector<pair<int,int>> a(n);
        vector<int> b(n),c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            c[a[i].second] = b[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}