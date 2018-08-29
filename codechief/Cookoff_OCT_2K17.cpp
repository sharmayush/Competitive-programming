#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tr;
    cin>>tr;
    while(tr--)
    {
        int w,r,i;
        cin>>w>>r;
        long int mk[w];
        for(i=0;i<w;i++)
        {
            cin>>mk[i];
        }
        sort(mk, mk+w);
       // int a=mk[(w+r)/2];
        {
            cout<<mk[(w+r)/2]<<endl;
        }
    }
    return 0;
}
