#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool check = true;
    unordered_set<char> a = {'a','e','i','o','u','n'};
    unordered_set<char> vo = {'a','e','i','o','u'};
    for(int i=0;i<s.length();i++)
    {
        if(i == s.length() - 1 and a.count(s[i]) == 0)
        {
            check = false; break;
        }
        if(a.count(s[i]) == 0 and vo.count(s[i+1]) == 0)
        {
            check = false; break;
        }
    }
    if(check)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}