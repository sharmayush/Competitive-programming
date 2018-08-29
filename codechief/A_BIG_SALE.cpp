#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        float total=0;
        float disc,newsum_disc;
        float price[n], quantity[n], discount[n];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>price[i]>>quantity[i]>>discount[i];
        }
        for(int i=0;i<n;i++)
        {
            disc = (price[i]/100)* discount[i];
            disc = price[i] + disc;
            newsum_disc = (disc/100)*discount[i];
            disc = disc - newsum_disc;
            disc = price[i] - disc;
            disc = disc * quantity[i];
            total = total + disc;
        }
        cout<<setprecision(9)<<fixed<<total<<endl;
    }
    return 0;
}
