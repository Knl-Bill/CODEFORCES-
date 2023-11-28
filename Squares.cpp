#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(k>n)
    {
        cout<<"-1\n";
        return 0;
    }
    sort(v.begin(),v.end());
    int i = 0,j=0,ans;
    while(j!=(n-k))
    {
        j++;
        i++;
    }
    ans = v[i];
    cout<<ans<<" "<<ans<<"\n";
    return 0;
}