#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    bool check;
    while(t--)
    {
        check = true;
        cin>>n; cin>>s;
        set<char> c;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'W' and c.size() == 1)
            {
                check = false;
                break;
            }
            else if(s[i] == 'W' and c.size() == 2)
                c.clear();
            else if(s[i] == 'B')
                c.insert(s[i]);
            else if(s[i] == 'R')
                c.insert(s[i]);
        }
        if(!check or c.size()==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}