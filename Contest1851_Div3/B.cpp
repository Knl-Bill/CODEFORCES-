#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n),b(n),c(n),d(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2 == 1)
                c[i] = 1;
            else
                c[i] = 0;
        }
        b = a;
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(b[i]%2 == 1)
                d[i] = 1;
            else
                d[i] = 0;
        }
        if(c == d)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}