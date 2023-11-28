#include <iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w%2 == 0)
    {
        if(w == 2)
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
    return 0;
}