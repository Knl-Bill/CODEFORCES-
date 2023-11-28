#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,sum=0;
        cin>>n;
        char str[n],ans[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        cout<<str<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<"In for loop\n";
            if((str[i] == '0' && str[i+1] == '0'))
            {
                cout<<"In if\n";

                ans[i] = '+';
                cout<<ans<<endl;
            }
            else if((sum + int(str[i]) + int(str[i+1])) == 1 && ((str[i] == '0' && str[i+1] == '1') || (str[i] == '1' && str[i+1] == '0')))
            {
                cout<<"In 1st else if\n";

                ans[i] = '-';
                cout<<ans<<endl;
            }
            else if((sum + int(str[i]) + int(str[i+1])) == '0' && ((str[i] == '0' && str[i+1] == '1') || (str[i] == '1' && str[i+1] == '0')))
            {
                cout<<"In 2nd else if\n";

                ans[i] = '+';
                cout<<ans<<endl;
            }
            else if((str[i] == '1' && str[i+1] == '1'))
            {
                cout<<"In else \n";

                ans[i] = '-';
                cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}