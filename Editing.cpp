#include <bits/stdc++.h>
using namespace std;
bool evaluate(string s1, char c, vector<int> & v,vector<bool> & c1, int index)
{
    int i=s1.length()-1;
    bool check = false;
    for(i;i>=0;i--)
    {
        if(s1[i] == c and c1[i] == false)
        {
            check = true;
            break;
        }
    }
    if(check)
    {
        v[index] = i;
        c1[i] = true;
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        vector<int> v(s2.length());
        vector<bool> c(s1.length(),false);
        bool check = false,eval;
        for(int i=s2.length()-1;i>=0;i--)
        {
            eval = evaluate(s1,s2[i],v,c,i);
            if(!eval)
            {
                break;
            }
        }
        if(eval)
        {
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i] >= v[i+1])
                {
                    check = true;
                    break;
                }
            }
        }
        if(eval)
        {
            if(check)
            {
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}