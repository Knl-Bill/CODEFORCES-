#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,q;
    long long ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        int sum = 0;
        ans = 0;
        vector<int> v(n),check;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>q)
            {
                if(sum>=k)
                {
                    check.push_back(sum);
                }
                sum=0;
            }
            else
            {
                sum++;
            }
        }
        if(sum>0 and sum>=k)
        {
            check.push_back(sum);
        }
        for(int i=0;i<check.size();i++)
        {
            int c = k;
            while(c <= check[i])
            {
                ans+=check[i]-c+1;
                c++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}