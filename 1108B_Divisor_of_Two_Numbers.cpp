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
    sort(v.begin(),v.end());
    vector<bool> check(n,false);
    set<int> s,index;
    int k=v[n-1];
    for(int i=1;i<n;i++)
    {
        if(k%v[i] == 0 and s.count(v[i]) == 0)
        {
             s.insert(v[i]);
             index.insert(i);
        }   
    }
    vector<int> v1(n-index.size());
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(index.count(i) == 0)
        {
            v1[j] = v[i];
            j++;
        }
    }
    sort(v1.begin(),v1.end());
    int z = v1[v1.size()-1];
    cout<<z<<" "<<k<<"\n";
    return 0;
}