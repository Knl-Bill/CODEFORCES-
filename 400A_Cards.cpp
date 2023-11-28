#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count,x;
    string s;
    vector<pair<int,int>> v = {{1,12},{2,6},{3,4},{4,3},{6,2},{12,1}},ans;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>s;
        count = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'X')
                x++;
        }
        if(x == 12)
        {
            cout<<6<<" ";
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i].first<<"x"<<v[i].second<<" ";
            }
            cout<<"\n";
        }
        else if(x == 0)
        {
            cout<<0<<"\n";
        }
        else{
            count=1;
            ans.push_back({1,12});
            for(int i=1;i<v.size();i++)
            {
                bool check = false;
                int l = 12/v[i].first;
                for(int j=0;j<v[i].second;j++)
                {
                    for(int k=0;k<v[i].first;k++)
                    {
                        if(s[l*k + j] == 'O')
                            break;
                        else if(s[l*k + j] == 'X' and k == v[i].first-1)
                        {
                            count++;
                            ans.push_back({v[i]});
                            check = true;
                            break;
                        }
                    }
                    if(check)
                        break;
                }
            }
            cout<<ans.size()<<" ";
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i].first<<"x"<<ans[i].second<<" ";
            }
            cout<<"\n";
        }
        ans.clear();
    }
    return 0;
}