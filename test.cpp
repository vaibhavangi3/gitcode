#include<iostream>
using namespace std;
int main()
{
    int t;
    for(cin>>t;t--;)
    {
        int a,b,q,count=0;
        cin>>a>>b>>q;
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            for(int j=x;j<=y;j++)
            {
                if(((j%a)%b)!=((j%b)%a))
                {
                    count++;
                }

            }
            cout<<count<<" ";
                 count=0;
        }

    }
}
