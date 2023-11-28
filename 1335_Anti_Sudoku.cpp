#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string> s(9);
    while(t--)
    {
        for(int i=0;i<9;i++)
        {
            cin>>s[i];
            for(int j=0;j<9;j++)
            {
                if(s[i][j] == '1')
                    s[i][j] = '2';
            }
        }
        for(string a : s)
            cout<<a<<"\n";
    }
    return 0;
}