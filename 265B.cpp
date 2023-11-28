#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h=0,sum=0;
    cin>>n;
    vector<int> nuts(n);
    for(int i=0;i<n;i++)
    {
        cin>>nuts[i];
    }
    sum=n-1;
    for(int i=0;i<n;i++)
    {
        sum+=abs(nuts[i] - h) + 1;
        h = nuts[i];
    }
    cout<<sum<<"\n";
    return 0;
}