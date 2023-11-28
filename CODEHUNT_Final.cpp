#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n,m;
        cin>>n;
        deque<int> arr1(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        cin>>m;
        deque<int> arr2(m);
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        vector<int> check;
        vector<int> start_index;
        vector<int> end_index;
        int start = 0,end = n-1,max=-9999,sum=0;
        if(n == 0)
        {
            check.push_back(0);
            start_index.push_back(start);
            end_index.push_back(start);
        }
        else if(n == 1)
        {
            if(arr1[0] > max)
            {
                max = arr1[0];
                check.push_back(max);
                start_index.push_back(0);
                end_index.push_back(0);
            }
        }
        else{
            for(int j=start;j<=end;j++)
        {
        
            sum+=arr1[j];
            if(sum>max)
            {
                max = sum;
                check.push_back(max);
                start_index.push_back(start);
                end_index.push_back(j);
            }
        }
        for(int j=start;j<=end;j++)
        {
            
            sum-=arr1[j];
            if(sum>max)
            {
                max = sum;
                check.push_back(max);
                start_index.push_back(j);
                end_index.push_back(end);
            }
        }
        }
        int max1=-9999,max_index;
        for(int k=0;k<check.size();k++)
        {
            if(check[k]>max1)
            {
                max1 = check[k];
            }
        }
        for(int k=0;k<check.size();k++)
        {
            if(check[k] == max1)
            {
                max_index = k;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(arr2[i]>0 && (end_index[max_index] == end))
            {
                check[max_index]+=arr2[i];
                arr1.push_back(arr2[i]);
            }
            else if(arr2[i]>0 && (start_index[max_index] == start))
            {
                check[max_index]+=arr2[i];
                arr1.push_front(arr2[i]);
            }
        }
        cout<<check[max_index]<<endl;
    }
    return 0;
}