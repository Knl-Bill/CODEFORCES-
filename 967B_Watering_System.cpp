#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0,ans;
    cin>>n>>a>>b;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin()+1,v.end(),greater<int>());
    int i=1;
    ans = v[0]*a/sum;
    while(ans < b)
    {
        sum-=v[i];
        i++;
        ans=v[0]*a/sum;
    }
    cout<<(i-1)<<"\n";
    return 0;
}