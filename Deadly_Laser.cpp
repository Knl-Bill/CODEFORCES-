#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,sx,sy,d,x,y,x1,y1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>sx>>sy>>d;
        x = sx+d;
        y = sy+d;
        x1 = sx-d;
        y1 = sy-d;
        if((x>=n and y>=m) or (x1 <= 1 and y1 <= 1) or (y>=m and y1<=1) or (x>=n and x1<=1))
        {
            cout<<-1<<"\n";
        }
        else{
            cout<<(n+m-2)<<"\n";
        }
    }
    return 0;
}