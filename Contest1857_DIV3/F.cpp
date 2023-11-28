#include <bits/stdc++.h>
using namespace std;
vector<int> fact(int n, int n1,int r)
{
    vector<int> v(3);
    int k=1;
    for(int i=2;i<=n;i++)
    {
        k*=n;
        if(i == r)
            v[0] = k;
        if(i == n1)
            v[1] = k;
    }
    v[2] = k;
    return v;
}
int main()
{
    int t,n,query,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        vector<int> out;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>query;
        int b,c;
        for(int i=0;i<query;i++)
        {
            cin>>b>>c;
            ans=0;
            int x1 = (b - sqrt(b*b-4*c))/2;
            int x2 = (b + sqrt(b*b-4*c))/2;
            pair<int,int> q = {0,0};
            cout<<"q.first and q.second are : "<<q.first<<" "<<q.second<<"\n";
            for(int j=0;j<n;j++)
            {
                if(a[j] == x1)
                    q.first++;
                if(a[j] == x2)
                    q.second++;
            }
            if(x1 != x2)
            {
                cout<<"for "<<b<<" and "<<c<<" x1 and x2 are "<<x1<<" "<<x2<<"\n";
                out.push_back(q.first*q.second);
            }
            else{
                cout<<"for "<<b<<" and "<<c<<" x1 and x2 are "<<x1<<" "<<x2<<"\n";
                vector<int> v(3);
                v = fact(q.first,q.first-2,2);
                out.push_back(v[2]/(v[0]*v[1]));
            }
        }
        for(int i=0;i<out.size();i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}