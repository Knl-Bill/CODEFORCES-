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
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<n/2 - (1-n%2)<<"\n";
    int i,j;
    for(i=0,j = n-1;i<=j;i++,j--)
    {
        cout<<v[i]<<" ";
        if(i != j)
        {
            cout<<v[j]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}