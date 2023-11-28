#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n=7;
        int array[n],array1[3];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        for(int i=0;i<3;i++)
        {
            if(i!=2)
            {
                array1[i] = array[i];
            }
            else if(i == 2)
            {
                array1[i] = array[n-1] - array1[1] -array1[0];
            }
            cout<<array1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}