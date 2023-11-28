#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,avail,ans;
    cin>>t;
    vector<int> v;
    multiset<int> s;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        avail = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            while(v[i]%2 == 0)
            {
                v[i]/=2;
                avail++;
            }
            int z=0,temp = i+1;
            while((temp)%2==0)
            {
                z++;
                temp/=2;
            }
            s.insert(z*-1);
        }
        ans = 0;
        int temp;
        bool check = false;
        if(avail >= n)
            cout<<0<<"\n";
        else{
            multiset<int> :: iterator it = s.begin();
            for(it;it!=s.end();it++)
            {
                avail += (*it)*-1;
                ans++;
                if(avail >= n)
                {
                    check = true;
                    break;
                }
            }
            if(!check)
                cout<<-1<<"\n";
            else
                cout<<ans<<"\n";
        }
        s.clear();
        v.clear();
    }
    return 0;
}