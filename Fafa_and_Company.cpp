#include <iostream>
using namespace std;
int main()
{
    int n,a=1,b,count=0;
    cin>>n;
    for(a;a<n;a++)
    {
        b = n - a;
        if(b%a == 0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}