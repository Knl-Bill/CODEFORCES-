#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> c(n);
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int ssum=0,esum=0,s=c[0],e=c[n-1],i=0,j=n-1;
        bool check = false;
        if(s!=e)
        {
            while(i<n and ssum<k)
            {
                if(c[i] == s)
                    ssum++;
                i++;
            }
            while(i<n and esum<k)
            {
                if(c[i] == e)
                    esum++;
                i++;
            }
            if(ssum>=k and esum>=k)
            {
                check = true;
            }
        }
        else{
            while(i<n)
            {
                if(c[i] == s)
                    ssum++;
                i++;
                if(ssum >= k)
                {
                    check = true;
                    break;
                }
            }
        }
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}