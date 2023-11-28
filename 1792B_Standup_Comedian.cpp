#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a!=0)
        {
            cout<<(a+min(b,c)*2+min(a+1,abs(b-c)+d))<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
    return 0;
}