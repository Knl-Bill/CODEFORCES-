#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum,k,j,m=0;
    for(int i=0;i<n;i++)
    {
        k=i-1; j=i+1; sum=1;
        while(k>=0 or j<n)
        {
            if(k>=0 and v[k]<=v[k+1])
            {
                k--;
                sum++;
            }
            if(j<n and v[j]<=v[j-1])
            {
                j++;
                sum++;
            }
            if((k<0 and j>n-1) or (k<0 and j<n and v[j]>v[j-1]) or (j>=n and k>=0 and v[k]>v[k+1]) or (v[j]>v[j-1] and v[k]>v[k+1]))
                break;
        }
        m = max(m,sum);
    }
    cout<<m<<"\n";
    return 0;
}