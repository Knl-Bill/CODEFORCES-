#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int count = 0;
    for(int j=0;j<n-1;j++)
    {
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == 'R' && s[i+1] == 'L')
        {
            count+=2;
            s[i] = 'D';
            s[i+1] = 'D';
        }
        else if(s[i] == 'D' && s[i+1] == 'L')
        {
            count+=1;
            s[i+1] = 'D';
        }
        else if(s[i] == 'R' && s[i+1] == 'D')
        {
            count+=1;
            s[i] = 'D';
        }
    }
    }
    cout<<count<<endl;
    return 0;
}