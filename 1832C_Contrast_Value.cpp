#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        a=1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n == 1)
        {
            cout<<1<<"\n";
        }
        else{
            int right = 0;
            for(int i=1;i<n;i++)
            {
                if(right >= 0 and v[i] < v[i-1])
                {
                    a++;
                    right = -1;
                }
                else if(right <= 0 and v[i] > v[i-1])
                {
                    a++;
                    right = 1;
                }
            }
            cout<<a<<"\n";
        }
        v.clear();
    }
    return 0;
}