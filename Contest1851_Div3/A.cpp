#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,H;
    cin>>t;
    while(t--)
    {
        int sum = 0;
        cin>>n>>m>>k>>H;
        vector<int> h(n);
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            if(abs(h[i] - H)%k==0 and abs(h[i] - H)>0 and abs(h[i] - H)/k < m)
            {
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}