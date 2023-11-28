#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,m,n,index;
    cin>>t;
    while(t--)
    {
        m = INT_MIN;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a<=10 and b>=m)
            {
                m = max(m,b);
                index = i+1;
            }
        }
        cout<<index<<"\n";
    }
    return 0;
}