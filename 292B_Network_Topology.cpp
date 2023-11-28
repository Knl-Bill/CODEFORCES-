#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,one=0,two=0,mul=0,t1,t2;
    cin>>n>>m;
    vector<int> v(n+1,0);
    for(int i=0;i<m;i++)
    {
        cin>>t1>>t2;
        v[t1]++; v[t2]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i] == 1)
            one++;
        else if(v[i] == 2)
            two++;
        else
            mul++;
    }
    if(one == 2 and two == n-2)
        cout<<"bus topology\n";
    else if(two == n)
        cout<<"ring topology\n";
    else if(one == n-1 and mul == 1)
        cout<<"star topology\n";
    else 
        cout<<"unknown topology\n";
    return 0;
}