#include <iostream>
using namespace std;
int is_under_attack(int n, int x, int y)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        if(i != x)
        {
            sum++;
        }
        if(i != y)
        {
            sum++;
        }
    }
    int a = x,b = y;
    while(a>1 && b>1)
    {
        sum++;
        a--;
        b--;
    }
    a = x,b = y;
    while(a<n && b<n)
    {
        sum++;
        a++;
        b++;
    }
    a = x,b = y;
    while(a>1 && b<n)
    {
        sum++;
        a--;
        b++;
    }
    a = x,b = y;
    while(a<n && b>1)
    {
        sum++;
        a++;
        b--;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,x,y;
        cin>>n>>x>>y;
        cout<<is_under_attack(n,x,y)<<endl;
    }
    return 0;
}