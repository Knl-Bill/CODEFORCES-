#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,p;
    long long sum=0,copy=0,m = INT_MIN;
    cin>>a>>p;
    vector<int> in(a);
    for(int i=0;i<a;i++)
    {
        cin>>in[i];
        sum+=in[i];
    }
    for(int i=0;i<a;i++)
    {
        copy += in[i];
        sum -= in[i];
        m = max(copy%p + sum%p,m);
    }
    cout<<m<<"\n";
    return 0;
}