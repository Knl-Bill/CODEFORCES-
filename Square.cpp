#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,b1,a2,b2;
        cin>>a1>>b1;
        cin>>a2>>b2;
        bool check1 = false, check2 = false;
        if(a1 == a2 or a1 == b2)
        {
            check1 = true;
            if(b1 + a2 == a1 or b1 + b2 == a1)
            {
                check2 = true;
            }
        }
        if(b1 == a2 or b1 == b2)
        {
            check1 = true;
            if(a1 + a2 == b1 or a1 + b2 == b1)
            {
                check2 = true;
            }
        }
        if(check1 and check2)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}