#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,e;
    cin>>t;
    vector<int> a,b;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        b.resize(n);
        int minim=INT_MAX, maxim = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        s=0; e=0;
        int i=0,j=n-1;
        while(a[i]==b[i])
            i++;
        while(a[j]==b[j])
            j--;
        for(int x=i;x<=j;x++)
        {
            minim = min(minim,a[x]);
            maxim = max(maxim,a[x]);
        }
        while(i>0 and a[i-1] <= minim and a[i-1] <= a[i])
            i--;
        while(j<n-1 and a[j+1] >= maxim and a[j+1] >= a[j])
            j++;
        cout<<i+1<<" "<<j+1<<"\n";
        a.clear();
        b.clear();
    }
    return 0;
}