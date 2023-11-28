#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        set<char> us;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == s[i+1])
            {
                i++;
            }   
            else{
                us.insert(s[i]);
            }
        }
        if(us.empty())
        {
            cout<<"\n";
        }
        else{
            for(char i:us)
            {
                cout<<i;
            }
            cout<<"\n";
        }
    
    }
    return 0;
}