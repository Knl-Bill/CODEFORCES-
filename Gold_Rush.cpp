#include <bits/stdc++.h>
using namespace std;
bool goldrush(int n, int m)
{
    if(n > 0)
    {
        if(n%3 == 0)
        {
            int first = n/3, sec = 2*n/3;
            if(first == m || sec == m)
            {
                return true;
            }
            else{
                return goldrush(first,m) or goldrush(sec,m);
                /*return goldrush(first,m); This won't work as it will just call the first return statement.
                return goldrush(sec,m); Doing or will execute both and or the result of both */ 
            }
        }
        else{
            return false;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,m;
        cin>>n>>m;
        bool check = false;
        check = goldrush(n,m);
        if(n == m)
        {
            check = true;
        }
        if(check)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}