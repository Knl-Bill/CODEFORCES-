#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    long long n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = stoi(s);
        if(n%2 == 0)
            cout<<n/2<<" "<<n/2<<"\n";
        else if(n%2 == 1 and n%10 != 9)
            cout<<n/2<<" "<<(n+1)/2<<"\n";
        else{
            a=0;b=0;
            bool check = true;
            for(int i=0;i<s.length();i++)
            {
                int m = s[i] - '0';
                if(m%2 == 0)
                {
                    a = a*10 + m/2;
                    b = b*10 + m/2;
                }
                else{
                    m/=2;
                    if(check)
                    {
                        a = a*10 + m + 1;
                        b = b*10 + m; 
                        check = false;
                    }
                    else{
                        a = a*10 + m;
                        b = b*10 + m + 1; 
                        check = true;
                    }
                }
            }
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}