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
        n = s.length();
        bool check = false,q=false,condi = false;
        int index = n;
        for(int i=n-1;i>0;i--)
        {
            if(condi and s[i+1]>='5')
            {
                s[i]+=1;
                condi = false;
                index = i+1;
            }
            if(check and s[i] < '9')
            {
                s[i] += 1;
                check = false;
                index = i+1;
                condi = true;
            }
            else if(!check and s[i] >= '5' and s[i-1] < '9')
            {
                s[i-1] += 1;
                index = i;
            }
            else if(!check and s[i] >= '5' and s[i-1] == '9')
            {
                index = i;
                check = true;
            }
        }
        for(int i=index;i<n;i++)
        {
            s[i] = '0';
        }
        if(check and s[0] < '9' or (!check and s[1] >= '5'))
        {
            s[0]+=1;
            index = 1;
            check = false;
        }
        if(s[0] >= '5' or (check and s[0] == '9'))
        {
            c = '1';
            index = 0;
            q = true;
        }
        for(int i=index;i<n;i++)
        {
            s[i] = '0';
        }
        if(q)
            s = c+s;
        cout<<s<<"\n";
    }
    return 0;
}