#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
    bool check;
    while(j<n)
    {
        check = false;
        if(us.count(b[j]) == 1)
        {
            check = true;
            c[j] = 0;
        }
        int sum=1;
        while(a[i] != b[j] and i<n and !check)
        {
            us.insert(a[i]);
            i++;
            sum++;
        }
        if(!check)
        {
            i++;
            c[j] = sum;
        }
        j++;
    }
    for(int i:c)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}