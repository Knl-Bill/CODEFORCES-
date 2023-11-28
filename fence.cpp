#include <iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int people[n],width[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>people[i];
        width[i] = 1;
    }
    for(int i=0;i<n;i++)
    {
        if(people[i] > h)
        {
            width[i] = 2;
        }
        sum += width[i];
    }
    cout<<sum<<endl;
    return 0;
}