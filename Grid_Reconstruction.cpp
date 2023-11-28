#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> ev(n),odd(n),ansev(n),ansodd(n);
        for(int i=0;i<n;i++)
        {
            ev[i] = 2*i + 2;
            odd[i] = 2*i + 1;
        }
        for(int i=0;i<n/2;i++)
        {
            ansev[2*i + 1] = ev[i];
            ansev[2*i] = ev[n-i-1]; 
        }
        for(int i=0;i<n/2;i++)
        {
            ansodd[2*i + 1] = odd[n/2 + i];
            ansodd[2*i] = odd[i]; 
        }
        for(int i=0;i<n;i++)
        {
            cout<<ansev[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<ansodd[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}