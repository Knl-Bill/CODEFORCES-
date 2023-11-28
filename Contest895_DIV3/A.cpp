#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<ceil(abs(a-b)/(2.0*c))<<"\n";
    }
    return 0;
}