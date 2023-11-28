#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,index,change;
    cin>>t;
    string s;
    while(t--)
    {   
        cin>>s;
        n = s.length();
        index = n+1;
        s = '0' + s;
        for(int i=n;i>0;i--)
        {
            if(s[i]>='5' and s[i-1]<'9')
            {
                s[i-1]+=1;
                index=i;
            }
        }
        for(int i=index;i<=n;i++)
        {
            s[i] = '0';
        }
        if(s[0] == '0')
        {
            s = s.substr(1);
        }
        cout<<s<<"\n";
    }
    return 0;
}