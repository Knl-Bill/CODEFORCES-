#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    vector<int> a,b;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        b.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int temp = 1;
        vector<int> ans1(2*n+1),ans2(2*n+1);
        for(int i=0;i<n;i++)
        {
            if(n>1)
            {
                if(i<n-1 and a[i] == a[i+1])
                    temp+=1;
                if(i<n-1 and temp>1 and a[i] != a[i+1])
                    temp = 1;
                if(i>=n-1 and a[i] != a[i-1])
                    temp=1;
                ans1[a[i]] = max(ans1[a[i]],temp);
            }
            else{
                ans1[a[i]] = 1;
            }
        }
        temp = 1;
        for(int i=0;i<n;i++)
        {
            if(n>1)
            {
                if(i<n-1 and b[i] == b[i+1])
                    temp++;
                if(i<n-1 and temp>1 and b[i] != b[i+1])
                    temp = 1;
                if(i==n-1 and b[i] != b[i-1])
                    temp=1;
                ans2[b[i]] = max(ans2[b[i]],temp);
            }
            else{
                ans2[b[i]] = 1;
            }
        }
        int maxim = INT_MIN;
        for(int i=1;i<=2*n;i++)
        {
            maxim = max(maxim, ans1[i]+ans2[i]);
        }
        cout<<maxim<<"\n";
        a.clear();
        b.clear();
    }
    return 0;
}
