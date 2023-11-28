#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>n;
        bool status = true;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> sortarr;
        sortarr = arr;
        sort(sortarr.begin(),sortarr.end());
        if(arr == sortarr)
        {
            cout<<0<<"\n";
        }
        else if(arr[0] == 1 || arr[n-1] == n)
        {
            cout<<1<<"\n";
        }
        else if(arr[0] == n && arr[n-1] == 1)
        {
            cout<<3<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    return 0;
}