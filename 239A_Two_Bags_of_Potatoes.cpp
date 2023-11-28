#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y,n,k;
    cin>>y>>k>>n;
    int mul = y/k,x;
    mul++;
    x = mul*k - y;
    if(x+y <= n)
    {
        while(x+y <= n)
        {
            cout<<x<<" ";
            x += k;
        }
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}