#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n=5,x=1,i=1,o,z=5;
    cin>>o;
    while(n<o)
    {
        z*=2;
        n+=z;
        x*=2;
    }
    n = n-z;
    o = o-n;
    if(o>=1 and o<=1*x)
        cout<<v[0]<<"\n";
    else if(o>=(1*x+1) and o<=2*x)
        cout<<v[1]<<"\n";
    else if(o>=(1+2*x) and o<=3*x)
        cout<<v[2]<<"\n";
    else if(o>=(1+3*x) and o<=4*x)
        cout<<v[3]<<"\n";
    else if(o>=(1*4*x) and o<=5*x)
        cout<<v[4]<<"\n";
    return 0;
}