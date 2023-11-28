#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    long long sum=0;
    cin>>n;
    vector<int> v;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x <= 0 or s.count(x) > 0 or x > n)
            v.push_back(x);
        else    
            s.insert(x);
    }
    sort(v.begin(),v.end());
    x=1; y=n;
    for(int i=0;i<v.size();i++)
    {
        //cout<<"in for\n";
        if(v[i] < n)
        {
            //cout<<"in if with x = "<<x<<"\n";
            for(x;x<=n;x++)
            {
                //cout<<"in for with x = "<<x<<"\n";
                if(s.count(x) < 1)
                {
                    sum += abs(v[i]-x);
                    x++;
                    break;
                }
            }
        }
        else{
            //cout<<"in else with y = "<<y<<"\n";
            for(y;y>=1;y--)
            {
                //cout<<"in for with y = "<<y<<"\n";
                if(s.count(y) < 1)
                {
                    sum+=abs(v[i]-y);
                    y--;
                    break;
                }
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}