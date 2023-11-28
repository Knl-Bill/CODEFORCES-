#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        k=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i+1 == v[i])
                k++;
        }
        cout<<(k+k%2)/2<<"\n";
        v.clear();
    }
    return 0;
}