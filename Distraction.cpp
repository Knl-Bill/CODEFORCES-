#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,sum = 0;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        vector<char>repeat;
        for(int i=0;i<n;i++)
        {
            if(repeat.empty() == 1)
            {
                repeat.push_back(str[i]);
            }
            else if(repeat.back() == str[i])
            {
                continue;
            }
            else
            {
                int count = 0;
                for(char j:repeat)
                {
                    if(str[i] == j)
                    {
                        count++;
                        sum++;
                    }
                }
                if(count == 0)
                {
                    repeat.push_back(str[i]);
                }
            }
        }
        if(sum>0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}