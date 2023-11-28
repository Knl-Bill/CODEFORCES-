#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,k,a1,ak,sum,ans;
    cin>>t;
    while(t--)
    {
        cin>>m>>k>>a1>>ak;
        sum=0;
        ans=0;
        sum += min((m/k)*k,ak*k);
        ak -= sum/k;
        int ones = min(m-sum,a1);
        sum += ones;
        a1 -= ones;
        if(sum < m)
        {
            int rem = m - sum;
            if(rem >= k)
            {
                int x = (m-sum)%k;
                ans = min((m-sum+x)/k,((m-sum)/k + (m-sum)%k));
            }
            else{
                int x = (m-sum)%k;
                if(a1 >= x)
                {
                    if(ak>0)
                    {
                        sum += min((sum/k)*k,ak*k);
                        if(sum==m)
                            cout<<"0\n";
                        else{
                            ans = m - sum;
                            cout<<ans<<"\n";
                        }
                    }
                }
                else
                    ans = m-sum;
            }
        }
    }
    return 0;
}
