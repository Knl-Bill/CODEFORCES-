#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a.begin(),a.end());
    int sum=0;
    if(m<=n)
    {
        for(int i=0;i<m;i++)
        {
            sum+=a[i];
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
    }
    if(m>n)
    {
        sum -= (m-n)*d;
    }
    cout<<sum<<"\n";
    return 0;
}