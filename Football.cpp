#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int best1, best0 = 0,status = false;
    for(int i=0;i<s.length();i++)
    {
        best0 = 0;
        best1 = 0;
        for(int j=i;j<s.length();j++)
        {
            if(s[j] == '1' && s[j+1] == '1')
            {
                best0 = 0;
                best1++;
                if(best1>=6)
                {
                    status = true;
                    break;
                }
            }
            else if(s[j] == '0' && s[j+1] == '0')
            {
                best1 = 0;
                best0++;
                if(best0>=6)
                {
                    status = true;
                    break;
                }
            }
            else if(s[j-1] == '1' && s[j] == '0' && s[j+1] == '1')
            {
                best1=0;
            }
            else if(s[j-1] == '0' && s[j] == '1' && s[j+1] == '0')
            {
                best0=0;
            }
            else{
                continue;
            }
        }
    }
    if(status)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}