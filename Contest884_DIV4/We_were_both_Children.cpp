#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int> inp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            inp[x]++;
        }
        map<int,int> m;
        int minim=0;
        for(auto i:inp)
        {
            int f = i.first;
            while(f<=n)
            {
                m[f]+=i.second;
                f+=i.first;
            }
        }
        for(auto i:m)
        {
            minim = max(minim,i.second);
        }
        cout<<minim<<"\n";
    }
    return 0;
}