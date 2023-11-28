#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(k == 0)
    {
        cout<<0<<"\n";
    }
    else if(k>0 and k<=n)
    {
        cout<<1<<"\n";
    }
    else{
        if(k%n == 0)
        {
            cout<<k/n<<"\n";
        }
        else{
            cout<<(k/n)+1<<"\n";
        }
    }
    return 0;
}