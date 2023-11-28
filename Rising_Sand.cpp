#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k == 1)
        {
            sum = (n-1)/2;
        }
        else{
            for(int i=1;i<n-1;i++)
            {
                if(v[i] > v[i-1] + v[i+1])
                {
                    sum++;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}