#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,minim,maxim,minindex,maxindex;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        v.resize(n);
        minim = INT_MAX;
        maxim = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(maxim <= v[i])
            {
                maxim = v[i];
                maxindex = i;
            }
            if(minim >= v[i])
            {
                minim = v[i];
                minindex = i;
            }
        }
        if(minim>=0)
        {
            cout<<(n-1)<<"\n";
            for(int i=1;i<n;i++)
            {
                cout<<i+1<<" "<<i<<"\n";
            }
        }
        else if(minim<0 and maxim<=0)
        {
            cout<<n-1<<"\n";
            for(int i=n-1;i>=1;i--)
            {
                cout<<i<<" "<<i+1<<"\n";
            }
        }
        else if(minim<=0 and maxim>0)
        {
            int z = minim*-1/maxim;
            vector<int> x;
            for(int i=0;i<n;i++)
            {
                if(v[i]<0)
                    x.push_back(i+1);
            }
            int lg = 0;
            if(maxim >= minim*-1 and z>0)
                lg = max(int(ceil(double(log(z)))/log(2)),0);
            else if(maxim < minim*-1 and z>0)
                lg = max(int(ceil(double(log(z)))+1/log(2)),0);
            cout<<n-1+lg+x.size()<<"\n";
            for(int i=0;i<lg;i++)
                cout<<maxindex+1<<" "<<maxindex+1<<"\n";
            for(int i=0;i<x.size();i++)
                cout<<x[i]<<" "<<maxindex+1<<"\n";
            for(int i=1;i<n;i++)
                cout<<i+1<<" "<<i<<"\n";
        }
        v.clear();
    }
    return 0;
}