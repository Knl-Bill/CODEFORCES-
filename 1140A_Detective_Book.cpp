#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]-=1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i] == i)
        {
            sum++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}