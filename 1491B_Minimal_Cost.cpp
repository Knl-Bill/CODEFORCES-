#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,u,v,cons = 1000001;
    cin>>t;
    unordered_map<int,int> ans;
    while(t--)
    {
        int a=0,b=0;
        cin>>n>>u>>v;
        for(int i=0;i<n;i++)
        {
            cin>>ans[i];
            ans[i]--;
        }
        bool check1 = false, check2 = true;
        for(int i=0;i<n-1;i++)
        {
            if(abs(ans[i] - ans[i+1]) > 1)
            {
                check1 = true;
                break;
            }
            if(abs(ans[i]-ans[i+1]) > 0)
                check2 = false;
        }
        if(check1)
            cout<<0<<"\n";
        else if(check2)
            cout<<(v + min(u,v))<<"\n";
        else{
            cout<<min(u,v)<<"\n";
        }
        ans.clear();
    }
    return 0;
}