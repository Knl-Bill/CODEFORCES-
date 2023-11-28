#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        if(m.count(a)>0)
            m[a]++;
        else
            m[a] = 1;
        if(m.count(b)>0)
            m[b]++;
        else
            m[b] = 1;
    }
    map<int,int>::iterator it = m.begin();
    for(it;it!=m.end();it++)
    {
        if(it->second == 1)
            sum++;
    }
    cout<<sum<<"\n";
    return 0;
}