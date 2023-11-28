#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool check;
    cin>>t;
    while(t--)
    {
        string s = "";
        check = false;
        vector<vector<char>> ans(8,vector<char> (8));
        vector<char> temp(8);
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>temp[j];
                if(temp[j]!='.')
                {
                    s+=temp[j];
                    check = true;
                }
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}