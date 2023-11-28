#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int length[3];
        bool rectangle = false;
        cin>>length[0]>>length[1]>>length[2];
        int l1 = length[0],l2 = length[1], l3 = length[2];
        for(int i=0;i<3;i++)
        {
                for(int j = 1;j<length[i];j++)
                {
                    int a = length[i] - j,b = j;
                    if((a == l1 || a == l2 || a == l2) && (b == l1 || b == l2 || b == l3))
                    {
                        rectangle = true;
                        break;
                    }
                    else if(l1 == l2 || l2 == l3 || l3 == l1)
                    {
                        if(i == 0)
                        {
                            if(a == b && l2 == l3)
                            rectangle = true;
                        }
                        else if(i == 1)
                        {
                            if(a == b && l1 == l3)
                            rectangle = true;
                        }
                        else if(i == 2)
                        {
                            if(a == b && l2 == l1)
                            rectangle = true;
                        }
                        if(rectangle == true)
                        {
                            break;
                        }
                    }
                    
                }
        }
        if(rectangle == true)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
