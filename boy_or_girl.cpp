#include <iostream>
#include <string.h>
using namespace std;
string chat(int n)
{
    if(n%2 == 0)
    {
        return "CHAT WITH HER!";
    }
    else{
        return "IGNORE HIM!";
    }
}
int main()
{
    string str1;
    cin>>str1;
    int count = 0;
    int n = str1.length();
    int array[n];
    int m=n;
    for(int i=0;i<n;i++)
    {
        array[i] = 0;
    }
    for(int i=0;i<m;i++)
    {
        count = 0;
        for(int j=0;j<m;j++)
        {
            if(str1[i] == str1[j])
            {
                count++;
                if(count>1)
                {
                    if(array[i] == 0 && array[j] == 0)
                    {
                        n--;
                        array[j] = 1;
                    }
                }
            }
        }
    }
    cout<<chat(n)<<endl;
    return 0;
}