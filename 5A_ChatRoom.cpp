#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,sum=0;
    while(getline(cin,s))
    {
        if(s[0] == '+')
            count++;
        else if(s[0] == '-')
            count--;
        else
            sum += count*(s.length() - s.find(':') - 1);
    }
    cout<<sum<<"\n";
    return 0;
}