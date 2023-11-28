#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,k;
        cin>>n>>k;
        if(k>n)
            cout<<(k-n)<<"\n";
        else
            cout<<(n-k)%2<<"\n";
    }
    return 0;
}