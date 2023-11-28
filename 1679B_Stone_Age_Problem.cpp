#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,opt,i,x;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_set<int> id;
    long long sum = 0,temp=-1;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
    }
    for(int y = q;y>=1;y--)
    {
        cin>>opt;
        if(opt == 1 and temp == -1)
        {
            cin>>i>>x;
            sum += x-v[i-1];
            v[i-1] = x;
            cout<<sum<<"\n";
        }
        else if(opt == 1 and temp != -1)
        {
            cin>>i>>x;
            if(id.count(i) > 0)
            {
                sum += x - v[i-1];
                v[i-1] = x;
                cout<<sum<<"\n";
                id.insert(i);
            }
            else{
                sum += x - temp;
                v[i-1] = x;
                cout<<sum<<"\n";
                id.insert(i);
            }
        }
        else if(opt == 2)
        {
            cin>>x;
            temp=x;
            id.clear();
            sum = n*x;
            cout<<sum<<"\n";
        }
    }
    return 0;
}