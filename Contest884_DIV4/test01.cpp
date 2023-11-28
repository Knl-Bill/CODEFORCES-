#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n,k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans = 0, sum = 1;
        sort(a.begin(),a.end());
        bool check = false;
        for(int i=0;i<n-1;i++)
        {
            
            if(a[i+1]-a[i] > k )
            {
                sum = 1;
            }
        }
        cout<<
    }
    return 0;
}