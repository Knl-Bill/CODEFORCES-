#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0] == a[n-1])
            cout<<-1;
        else{
            int check = a[n-1],k=0;
            while(a[k] != check)
                k++;
            cout<<k<<" "<<n-k<<"\n";
            for(int i=0;i<k;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            for(int i=k;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}