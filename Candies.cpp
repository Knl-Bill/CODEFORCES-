#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,a,b;
        cin>>n;
        if(n == 0 || n == 1 || n == 2)
        {
            cout<<0<<endl;
        }
        else{
            a = n/2 + 1;
            b = n - a;
            cout<<b<<endl;
        }
    }
    return 0;
}