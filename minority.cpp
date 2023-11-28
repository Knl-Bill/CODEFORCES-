#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
        }
        if(s.length()%2 == 0 && count == s.length()/2)
        {
            cout<<count-1<<"\n";
        }
        else
        {
            cout<<min(count,(int)s.length()-count)<<"\n";
        }
    }
    return 0;
}