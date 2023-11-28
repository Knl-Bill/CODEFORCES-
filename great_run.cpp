#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,k;
        cin>>n>>k;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        int max = 0,sum=0;
        for(int i=0;i<=(n-k);i++)
        {
            sum = 0;
            for(int j = 0;j<k;j++)
            {
                sum = array[i+j] + sum;
            }
            max = (max>sum)? max : sum;
        }
        cout<<max<<endl;
    }
    return 0;
}