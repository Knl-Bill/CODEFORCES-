#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,index;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i == 0)
            {
                if(array[i] != array[i+1] && array[i+1] == array[i+2])
                {
                    index = i;
                }
            }
            else if(i == (n-1))
            {
                if(array[i] != array[i-1] && array[i-1] == array[i-2])
                {
                    index = i;
                }
            }
            else{
                if((array[i-1] != array[i]) && (array[i] != array[i+1]) && (array[i-1] == array[i+1]))
                {
                    index = i;
                }
            }
        }
        cout<<(index+1)<<endl;
    }
    return 0;
}               