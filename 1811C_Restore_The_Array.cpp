#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
        }
        cout<<v[0]<<" ";
        for(int i=0;i<n-2;i++)
        {
            cout<<min(v[i],v[i+1])<<" ";
        }
        cout<<v[n-2]<<"\n";
    }
    return 0;
}