#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long long sum;
    string s;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sum=0;
        v.resize(n);
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'L')
            {
                v[i] = (n-i-1) - i;
                sum += i;
            }
            else{
                v[i] = i - (n-i-1);
                sum += n-i-1;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
                sum+=v[i];
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
    return 0;
}