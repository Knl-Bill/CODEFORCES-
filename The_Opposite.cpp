#include <iostream>
using namespace std;
int ret(int c,int d, int e)
{
    if(c>d)
    {
        return 0;
    }
    else if(c<=d && c>0)
    {
        int res = (c+e-1);
        if(res == d)
        {
            return res;
        }
        else{
            return res%d;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t-=1;
        int a,b,c,d,e,copya,copyb;
        cin>>a>>b>>c;
        if(a!= 1 || b!=1)
        {
            int minim = (a<b)? a : b;
            copya = a-(minim-1);
            copyb = b-(minim-1);
            if(copya == 1)
            {
                d = 2*(copyb-1);
                e = copyb;
            }
            else if(copyb == 1)
            {
                d = 2*(copya-1);
                e = copya;
            }
        }
        else if(a == 1)
        {
            d = 2*(b-1);
            e = b;
        }
        else if(b == 1)
        {
            d = 2*(a-1);
            e = a;
        }
        if(d>=a && d>=b & d>=c)
        {
            int check = ret(c,d,e);
            if(check == 0)
            {
                cout<<-1<<endl;
            }
            else{
                cout<<check<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}