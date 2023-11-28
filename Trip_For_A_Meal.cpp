#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,sum=0,count = 1;
    bool ac = true, bc = false, cc = false;
    cin>>n;cin>>a;cin>>b;cin>>c;
    while(count<n)
    {
        if(ac)
        {
            if(b<=a)
            {
                sum+=b;bc=true;ac=false;
            }
            else{
                sum+=a;cc=true;ac=false;
            }
        }
        else if(bc)
        {
            if(b<=c)
            {
                sum+=b;ac=true;bc=false;
            }
            else{
                sum+=c;cc=true;bc=false;
            }
        }
        else if(cc)
        {
            if(c<=a)
            {
                sum+=c;bc=true;cc=false;
            }
            else{
                sum+=a;ac=true;cc=false;
            }
        }
        count++;
    }
    cout<<sum<<"\n";
    return 0;
}