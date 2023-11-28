#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int a,b,x,y,z,count=0;
        cin>>a>>b;
        if(a<b)
        {
            z = b-a;
            while(a!=b)
            {
                z = b-a;
                if(z%2 == 1)
                {
                    a+=z;
                    count++;
                }
                else if(z%2 == 0)
                {
                    z-=1;
                    a+=z;
                    count++;
                }
            }
        }
        else if(b<a)
        {
            z = a-b;
            while(a!=b)
            {
                z = a-b;
                if(z%2 == 0)
                {
                    a-=z;
                    count++;
                }
                else if(z%2 == 1)
                {
                    z+=1;
                    a-=z;
                    count++;
                }
                if(b>a && z == -1)
                {
                    a+=1;
                    count++;
                }
            }
        }
        else if(a == b)
        {
            count = 0;
        }
        cout<<count<<endl;
    }
    return 0;
}