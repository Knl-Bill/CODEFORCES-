#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool check = true;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] != s[i+1])
        {
            check = false;
            cout<<"YES\n";
            cout<<s[i]<<s[i+1]<<"\n";
            break;
        }
    }
    if(check)
    {
        cout<<"NO\n";
    }
    return 0;
}