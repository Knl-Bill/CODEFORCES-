#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) 
        return false; 
    if (num <= 3) 
        return true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false; 
    }
    return true; 
}
int main()
{
    int t,l,r,a,b;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(r == 1 or r == 2 or r == 3)
        {
            cout<<-1<<'\n';
        }
        else if(r%2 == 0 and r>2)
        {
            cout<<r-2<<" "<<2<<"\n";
        }
        else if(r>2 and r%2 == 1 and r!=l)
        {
            r-=1;
            cout<<r-2<<" "<<2<<"\n";
        }
        else if(l==r and isPrime(l))
            cout<<-1<<"\n";
        else if(l==r)
        {
            for(int i=2;i<r;i++)
            {
                if((r-i)%i==0)
                {
                    cout<<(r-i)<<" "<<i<<"\n";
                    break;
                } 
            }
        }
    }
    return 0;
}