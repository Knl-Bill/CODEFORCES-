#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,maxim,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        maxim = INT_MIN;
        for(long long i=1;i<=1000;i++)
        {
            if(n%i==0)
            {
                k++;
                maxim = max(k,maxim);
            }
            else{
                maxim = max(maxim,k);
                k=0;
            }
        }
        cout<<maxim<<"\n";
    }
    return 0;
}