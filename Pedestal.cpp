#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,h1,h2,h3,div,rem;
        cin>>n;
        div = n/3;
        rem = n%3;
        h1 = div;
        h2 = div;
        h3 = div;
        if(rem>0)
        {
            h1++;
            rem--;
        }
        if(rem>0)
        {
            h2++;
            rem--;
        }
        if(h1 == h2)
        {
            h1++;
            h3--;
        }
        if(h3 == h2)
        {
            h3--;
            h1++;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
    return 0;
}