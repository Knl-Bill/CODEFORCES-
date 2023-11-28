#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int min = a[0];
        if(n>2)
        {
            for(int i=0;i<n-1;i++)
            {
                int m = a[i];
                for(int j=i;j<n;j++)
                {
                    a[j]-=m;
                }
                min = max(min,a[i+1]);
            }
        }
        else if(n == 2)
        {
            min = max(min,a[1]-a[0]);
        }
        cout<<min<<"\n";
    }
    return 0;
}