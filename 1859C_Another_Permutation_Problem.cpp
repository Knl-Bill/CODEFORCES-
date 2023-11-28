#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,maxim,sum;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        maxim = INT_MIN;
        cin>>n;
        v.resize(n);
        iota(v.begin(),v.end(),1);
        int locmax;
        for(int i=n-1;i>=0;i--)
        {
            locmax = INT_MIN;
            sum=0;
            sort(v.begin()+i,v.end(),greater<int> ());
            for(int j=0;j<n;j++)
            {
                sum += v[j]*(j+1);
                locmax = max(locmax,v[j]*(j+1));
            }
            maxim = max(maxim,sum-locmax);
            
        }
        cout<<maxim<<"\n";
    }
    return 0;
}