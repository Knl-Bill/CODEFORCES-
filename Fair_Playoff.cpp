#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int s[4],w1,w2,l1,l2,w_all;
        cin>>s[0]>>s[1]>>s[2]>>s[3];
        if(s[0]>s[1])
        {
            w1 = s[0];
            l1 = s[1];
        }
        else{
            w1 = s[1];
            l1 = s[0];
        }
        if(s[2]>s[3])
        {
            w2 = s[2];
            l2 = s[3];
        }
        else{
            w2 = s[3];
            l2 = s[2];
        }
        if(w1>w2 && w2>l1)
        {
            w_all = w1;
            cout<<"YES\n";
        }
        else if(w2>w1 && w1>l2)
        {
            w_all = w2;
            cout<<"YES\n";
        }
        else if(w1>w2 && w2<l1)
        {
            w_all = w1;
            cout<<"NO\n";
        }
        else if(w2>w1 && w1<l2)
        {
            w_all = w2;
            cout<<"NO\n";
        }
    }
    return 0;
}