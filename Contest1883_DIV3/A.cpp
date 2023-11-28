#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    char c;
    while(t--)
    {
        cin>>s;
        n=s.length();
        c='1';
        map<char,int> m = {{'1',0},{'2',1},{'3',2},{'4',3},{'5',4},{'6',5},{'7',6},{'8',7},{'9',8},{'0',9}};
        for(int i=0;i<s.length();i++)
        {
            n+=abs(m[s[i]] - m[c]);
            c = s[i];
        }
        cout<<n<<"\n";
    }
    return 0;
}