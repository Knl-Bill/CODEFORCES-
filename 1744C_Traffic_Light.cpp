#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    char x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        cin>>s;
        bool check = false;
        int m = INT_MIN,gfirst=-1,index;
        for(int i=0;i<n;i++)
        {
            if(gfirst==-1 and s[i] == 'g')
            {
                gfirst = i;
            }
            if(!check and s[i]==x)
            {
                check = true;
                index = i;
            }
            if(check and s[i]=='g')
            {
                check = false;
                m = max(m,i-index);
            }
            if(!check and s[i] == 'g')
            {
                m = max(m,0);
            }
        }
        if(check)
            m = max(m,n-index+gfirst);
        cout<<m<<"\n";
    }
    return 0;
}