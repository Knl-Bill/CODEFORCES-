#include <bits/stdc++.h>
using namespace std;
long long modularPower(int base, int exponent, int mod) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

int main()
{
    int b,k,i;
    cin>>b>>k;
    vector<int> a(k);
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    long long ans = 0;
    for(i=0;i<k;i++)
    {
        long long x = a[i], y=modularPower(b,(k-i-1),10);
        if(x%10 != 0)
        {
            x%=10;
        }
        ans += x*y;
        if(ans%10 != 0)
        {
            ans%=10;
        }
    }
    if(ans%2 == 0)
    {
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
    return 0;
}