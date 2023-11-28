#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> puzzles(m);
    for(int i=0;i<m;i++)
    {
        cin>>puzzles[i];
    }
    sort(puzzles.begin(),puzzles.end());
    int minim = INT_MAX;
    for(int i=0;i<(m-n+1);i++)
    {
        minim = min(minim,puzzles[i+n-1] - puzzles[i]);
    }
    cout<<minim<<"\n";
    return 0;
}