#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,lmax,rmin,a,b;
    multiset<int> ml,mr;
    char sign;
    cin>>q;
    for(int x;x<q;x++)
    {
        cin>>sign>>a>>b;
        if(sign=='+')
        {
            ml.insert(a);
            mr.insert(b);
        }
        else if(sign=='-')
        {
            multiset<int>::iterator it = ml.find(a);
            ml.erase(it);
            it = mr.find(b);
            mr.erase(it);
        }
        //cout<<"mr.rbegin() and ml.begin() are "<<*mr.begin()<<" "<<*ml.rbegin()<<"\n";
        if(!ml.empty() and !mr.empty() and (*mr.begin() < *ml.rbegin()))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}