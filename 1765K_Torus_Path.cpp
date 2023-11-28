#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,minim = INT_MAX,x;
    long long sum = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x;
            sum+=x;
            if(i+j == n-1)
                minim = min(minim,x);
        }
    }
    cout<<sum-minim<<"\n";
    return 0;
}