#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> m;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(m[s] >= 1)
        {
            string s1 = s;
            s1 += to_string(m[s1]);
            m[s]++;
            cout<<s1<<"\n";
        }
        else{
            m[s]++;
            cout<<"OK\n";
        }
    }
    return 0;
}