#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        p=0;
        string s;
        cin>>s; 
        cin>>n;
        vector<pair<char,int>> s1(s.length());
        for(int i=0;i<s1.size();i++)
        {
            s1[i].first = s[i];
            s1[i].second = i;
            p += int(s[i]) - int('a') + 1;
        }
        sort(s1.begin(),s1.end());
        vector<bool> check(s1.size(),false);
        int i = s1.size()-1;
        while(p>n)
        {
            p-=(int(s1[i].first) - int('a') + 1);
            check[i] = true;
            i--;
        }
        vector<char> ans(s1.size());
        for(int i=0;i<s1.size();i++)
        {
            if(!check[i])
            {
                ans[s1[i].second] = s1[i].first;
            }
            else{
                ans[s1[i].second] = ' ';
            }
        }
        s = "";
        for(int i=0;i<ans.size();i++)
        {
            s += ans[i];
        }
        s.erase(remove_if(s.begin(),s.end(),[](char c){return c == ' ';}),s.end());
        if(s.empty())
        {
            cout<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
    return 0;
}