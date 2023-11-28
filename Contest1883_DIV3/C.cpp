#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,even,minim;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        v.resize(n);
        minim = INT_MAX;
        even=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
                even++;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%k == 0)
            {
                minim = 0;
                break;
            }
            minim = min(minim,k-(v[i]%k));
        }
        if(k==4)
        {
            even = min(even,2);
            minim = min(minim,2-even);
        }
        v.clear();
        cout<<minim<<"\n";
    }
    return 0;
}