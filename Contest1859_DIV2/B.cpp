#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> &a, pair<int,int> &b)
{
    return a.second < b.second;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int temp;
        vector<int> x,y;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            vector<int> a(temp);
            for(int j=0;j<temp;j++)
            {
                cin>>a[j];
            }
            sort(a.begin(),a.end());
            x.push_back(a[0]);
            y.push_back(a[1]);
            a.clear();
        }
        sort(x.begin(),x.end());
        sort(y.rbegin(),y.rend());
        long long ans = 0;
        ans+=x[0];
        for(int i=0;i<n-1;i++)
            ans+=y[i];
        cout<<ans<<"\n";
    }
    return 0;
}
//