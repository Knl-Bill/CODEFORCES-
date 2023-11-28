#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count0=0,count1=0;
    cin>>n;
    char *arr;
    arr = new char[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == '0')
        {
            count0++;
        }
        count1 = n - count0;
    }
    int min = (count0<count1)? count0 : count1;
    cout<<(n - 2*min)<<"\n";
    free(arr);
    return 0;
}