#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    bool check;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.length();
        check = true;
        for(i=1;i<=n/2;i++)
        {
            if(s[i] != s[n-i])
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            cout<<-1<<"\n";
        }
        else{
            cout<<(n-1)<<"\n";
        }
    }
    return 0;
}