#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        int maxim = INT_MIN;
        maxim = max(v[0],v[1]);
        maxim = max(maxim,v[2]);
        int sum = v[0] + v[1] + v[2] - maxim;
        if(maxim <= (sum + 1))
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}