#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unordered_set<int> u;
        for(int i=1;i<=n;i++)
        {
            u.insert(i);
        }
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
        }
        int i=0,check;
        bool swit = true;
        while(i<n)
        {
            if(v[i+1] - v[i] <= n and u.count(v[i+1] - v[i])>0)
                u.erase(v[i+1] - v[i]);
            else if(v[i+1] - v[i] > n)
            {
                swit = false;
                break;
            }
            else
            {
                check = v[i+1] - v[i];
                break;
            }
        }
        int j = n-1;
        while(j>i)
        {
            if(u.count(v[j] - v[j-1]))
                u.erase(v[j] - v[j-1])
        }

    }
    return 0;
}