#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,i=0,max = -9999,count=0,temp;
        cin>>n;
        int * arr,*copy;
        arr = new int[n];
        copy = new int[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            max = (max>arr[i])? max : arr[i];
        }
        /*for(i=0;i<n;i++)
        {
            max = -9999;
            for(int j=0;j<n;j++)
            {
                if(i != j)
                {
                    max = (max>arr[j])? max : arr[j];
                }
            }
            copy[i] = arr[i] - max;
            cout<<copy[i]<<" ";
        }*/
        for(i=0;i<n;i++)
        {
            if(arr[i] != max)
            {
                copy[i] = arr[i] - max;
                cout<<copy[i]<<" ";
            }
            else if(arr[i] == max && count == 0)
            {
                count++;

                int max1 = -9999;
                temp = i;
                for(int j=0;j<n;j++)
                {
                    if(i != j)
                    {
                        max1 = (max1>arr[j])? max1 : arr[j];
                    }
                }
                copy[i] = arr[i] - max1;
                cout<<copy[i]<<" ";
            }
            else if(arr[i] == max && count>0)
            {
                copy[i] = copy[temp];
                cout<<copy[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}