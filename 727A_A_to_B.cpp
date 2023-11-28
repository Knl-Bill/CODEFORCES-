#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    deque<int> d;
    bool check = false;
    while(a<=b)
    {
        d.push_front(b);
        if(a == b)
        {
            check = true;
            break;
        }
        if(b%2 == 0)
        {
            b/=2;
        }
        else if(b%2 == 1 and b%10 == 1)
        {
            b-=1;
            b/=10;
        }
        else if(b%2 == 1 and b%10 != 1)
        {
            break;
        }
    }
    if(check)
    {
        cout<<"YES\n"<<d.size()<<"\n";
        for(int i=0;i<d.size();i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}