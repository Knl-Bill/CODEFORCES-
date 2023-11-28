#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j,sum=0;
    cin>>n;
    string s;
    cin>>s;
    j = s.length()-1;
    while(i<n and s[i] == '<')
    {
        sum++;
        i++;
    }
    while(j>=i and s[j] == '>')
    {
        sum++;
        j--;
    }
    cout<<sum<<"\n";
    return 0;
}