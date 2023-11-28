#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,i=0,min=INT_MAX,overall_min=INT_MAX;
        cin>>n;
        deque<int> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        overall_min = v[0];
        for(i=1;i<v.size();i++)
        {
            overall_min = max(overall_min,v[i]-v[i-1]);
        }
        cout<<overall_min<<"\n";
    }
    return 0;
}