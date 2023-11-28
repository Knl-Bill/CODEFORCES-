#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,sum;
    string s;
    cin>>t;
    map<char,int> m;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        sum=0;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(auto i:m)
        {
            if(i.second%2==1)
                sum++;
        }
        if(sum>k+1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        m.clear();
    }
    return 0;
}