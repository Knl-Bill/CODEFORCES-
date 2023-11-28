#include <iostream>
using namespace std;
int is_under_attack(int n, int x, int y)
{
    int sum = 0;
    sum =  sum + (n-1)*2;
    sum =  sum + min(x-1,y-1);
    sum =  sum + min(x-1,n-y);
    sum =  sum + min(n-x,y-1);
    sum =  sum + min(n-x,n-y);
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