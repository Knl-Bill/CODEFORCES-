#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        float n,v1,v2;
        cin>>n>>v1>>v2;
        if(2*n/v2 <= n*sqrt(2)/v1)
        {
            cout<<"Elevator\n";
        }
        else{
            cout<<"Stairs\n";
        }
    }
    return 0;
}