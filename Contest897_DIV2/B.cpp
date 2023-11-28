#include <bits/stdc++.h>
using namespace std;
bool check(vector<char> ans)
{
    int n = ans.size();
    for(int i=0;i<ans.size()/2;i++)
    {
        if(ans[i] != ans[n-i-1])
            return false;
    }
    return true;
}
int main()
{
    int test,n,sum;
    vector<char> s,t;
    int diff,ones;
    bool ch;
    cin>>test;
    while(test--)
    {
        cin>>n;
        diff = 0; ones = 0;
        s.resize(n);
        t.resize(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i] == '1')
                ones++;
        }
        ch = check(s);
        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
                diff++;
        }
        for(int i=0;i<n+1;i++)
        {
            if(n%2 == 1)
            {
                if((ch and i<=(n-ones)) or (ch and (i == n or i == 0)))
                    t[i] = '1';
                else if(ch and i>(n-ones) and (i-(n-ones))%2 == 0)
                    t[i] = '1';
                else if(ch and i>(n-ones) and (i-(n-ones))%2 == 1)
                    t[i] = '0';
                else if(!ch and (i==n or i==0))
                    t[i] = '0';
                else if(!ch and i>=diff and i<=(n-ones))
                    t[i] = '1';
                else if(!ch and i>(n-ones) and (i-(n-ones))%2 == 0)
                    t[i] = '1';
                else if(!ch and i>(n-ones) and (i-(n-ones))%2 == 1)
                    t[i] = '0';
            }
            else{
                if((ch and i<=(n-ones) and i%2 == 0) or (ch and (i==n or i==0)))
                    t[i] = '1';
                else if(ch and i<=(n-ones) and i%2==1)
                    t[i] = '0';
                else if(ch and i>(n-ones) and (i-(n-ones))%2 == 0)
                    t[i] = '1';
                else if(ch and i>(n-ones) and (i-(n-ones))%2 == 1)
                    t[i] = '0';
                else if(!ch and (i==0 or i == n))
                    t[i] = '0';
                else if(!ch and i>0 and i<=(n-ones) and i%2 == 0)
                    t[i] = '1';
                else if(!ch and i>0 and i<=(n-ones) and i%2 == 1)
                    t[i] = '0';
                else if(!ch and i>(n-ones) and (i-(n-ones))%2 == 0)
                    t[i] = '1';
                else if(!ch and i>(n-ones) and (i-(n-ones))%2 == 1)
                    t[i] = '0';
            }
        }
        for(auto i:t)
        {
            cout<<i;
        }
        cout<<"\n";
        s.clear(); 
    }
    return 0;
}