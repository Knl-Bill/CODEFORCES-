#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5]={0},sum=0;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[0];
        a[a[0]]++;
    }
    sum+=a[4];
    sum+=a[3];
    a[1]-=a[3];
    if(a[1]<0)
        a[1]=0;
    sum+=a[2]/2;
    if(a[2]%2==0)
        a[2]=0;
    else
        a[2]=1;
    a[1]+=a[2]*2;
    if(a[1]%4==0)
        sum+=a[1]/4;
    else
        sum+=a[1]/4+1;
    cout<<sum<<"\n";
    return 0;
}