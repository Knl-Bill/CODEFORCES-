#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        vector<int> v1,v2;
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[j] == '0')
            {
                while(s[i] != '1' and i<j)
                {
                    i++;
                }
                if(i<j)
                {
                    v1.push_back(i+1);
                    v2.push_back(j+1);
                    i++;
                }
                if(i>=j)
                {
                    break;
                }
            }
            j--;
        }
        if(v1.size() == 0 and v2.size() == 0)
        {
            cout<<"0\n";
        }
        else{
            cout<<"1\n"<<(v1.size() + v2.size())<<" ";
            for(i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";
            }
            for(j=v2.size()-1;j>=0;j--)
            {
                cout<<v2[j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}