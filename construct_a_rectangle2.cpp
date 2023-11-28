#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
        bool rectangle = false;
        if(l1+l2 == l3 || l2+l3 == l1 || l1+l3 == l2)
        {
            rectangle = true;
        }
        else
        {
            if((l1==l2 && l3%2 == 0) || (l1==l3 && l2%2 == 0) || (l2==l3 && l1%2 == 0))
            {
                rectangle = true;
            }
        }
        if(rectangle == true)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}