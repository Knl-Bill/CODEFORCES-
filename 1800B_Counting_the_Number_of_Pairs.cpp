#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        sum=0;
        vector<int> u(26,0),l(26,0);
        for(int i=0;i<n;i++)
        {
            if(islower(s[i]))
            {
                l[int(s[i]) - int('a')]++;
            }
            else
            {
                u[int(s[i]) - int('A')]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            int m;
            if(u[i]>0 and l[i]>0)
            {
                m = min(u[i],l[i]);
                sum += m;
                u[i]-=m; l[i]-=m;
            }
            if(u[i] == 0)
            {
                m = min(l[i]/2,k);
                sum += m;
                l[i]-=2*m;
                k-=m;
            }
            else if(l[i] == 0)
            {
                m = min(u[i]/2,k);
                sum += m;
                u[i]-=2*m;
                k-=m;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}