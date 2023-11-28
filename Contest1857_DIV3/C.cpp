#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x = n*(n-1)/2;
        vector<int> b(x);
        vector<int> a(n);
        int counter = 1,size=1,index=0;
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
        }
        sort(b.rbegin(),b.rend());
        for(int i=0;i<x;i++)
        {
            if(counter == size)
            {
                a[index] = b[i];
                counter++;
                size = 1;
                index++;
            }
            else{
                size++;
            }
        }
        a[n-1] = a[0];
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}