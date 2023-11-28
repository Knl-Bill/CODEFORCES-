#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if(ans%2 == 0)
            {
                if(s[i] == '1' && s[i+1] == '0')
                {
                    ans++;
                }
            }
            else{
                if(s[i] == '0' && s[i+1] == '1')
                {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}