#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    map<int, int> ans;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]%a[j] == 0)
            {
                int x = b[i]/a[j];
                if(ans.count(x) == 0)
                {
                    ans[x] = 1;
                }
                else{
                    ans[x]++;
                }
            }
        }
    }
    int Max = INT_MIN;
    map<int,int>::iterator it;
    for(it = ans.begin(); it != ans.end();it++)
    {
        Max = max(Max,it->first);
    }
    cout<<ans[Max]<<"\n";
    return 0;
}