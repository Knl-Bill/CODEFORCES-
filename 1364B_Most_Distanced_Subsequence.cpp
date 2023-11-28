#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    vector<int> v;
    vector<int> s;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        bool inc=0,dec=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(v[1] >= v[0])
            inc = 1;
        else    
            dec = 1;
        s.push_back(v[0]);
        for(int i=2;i<n;i++)
        {
            if(inc and v[i] < v[i-1])
            {
                inc = 0; dec = 1;
                s.push_back(v[i-1]);
            }
            else if(dec and v[i] > v[i-1])
            {
                dec = 0; inc = 1;
                s.push_back(v[i-1]);
            }
        }
        if(inc and v[n-1] >= v[n-2])
            s.push_back(v[n-1]);
        else if(dec and v[n-1] <= v[n-2])
            s.push_back(v[n-1]);
        cout<<s.size()<<"\n";
        for(int i=0;i<s.size();i++)
            cout<<s[i]<<" ";
        cout<<"\n";
        s.clear();
        v.clear();
    }
    return 0;
}