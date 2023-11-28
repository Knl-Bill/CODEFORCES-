#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    long long n,x,t;
    cin>>k;
    while(k--)
    {
        cin>>n>>x>>t;
        long long d = t/x;
        if(d > n)
        {
            cout<<((n-1)*n/2)<<"\n";
        }
        else{
            cout<<((n-d)*d + d*(d-1)/2)<<"\n";
        }
    }
    return 0;
}