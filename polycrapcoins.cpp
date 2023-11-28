#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(t;t>0;t--)
    {
        int num,sum=0,two=0,one=0;
        cin>>num;
        /*for(sum=0;sum<=num;sum+=0)
        {
            if(num-sum>=3)
            {
                two++;
                one++;
                sum=sum+3;
            }
            else if(num-sum == 2)
            {
                two++;
                sum=sum+2;
            }
            else if(num-sum == 1)
            {
                one++;
                sum= sum + 1;
            }
            if(sum == num)
            break;
        }*/
        two = num/3;
        one = two;
        if(num%3 == 1)
        {
            one++;
        }
        else if(num%3 == 2)
        {
            two++;
        }
        cout<<one<<" "<<two<<endl;
    }
    return 0;
}