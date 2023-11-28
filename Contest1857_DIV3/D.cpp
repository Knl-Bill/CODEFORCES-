#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,out,sum;
    vector<int> a,b,graph;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        b.resize(n);
        graph.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        out=INT_MIN;
        sum=0;
        for(int i=0;i<n;i++)
        {
            graph[i] = a[i] - b[i];
            if(graph[i]>out)
            {
                out = graph[i];
                sum=1;
            }
            else if(graph[i] == out)
                sum++;
        }
        cout<<sum<<"\n";
        for(int i=0;i<n;i++)
        {
            if(graph[i] == out)
                cout<<i+1<<" ";
        }
        cout<<"\n";
        a.clear();
        b.clear();
    }
    return 0;
}