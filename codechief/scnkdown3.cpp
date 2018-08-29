#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,e=0;
        cin>>n;
        int a[n];
        int r=n/2;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    //    cout<<a[r]<<endl;  // mid value of array
        for(i=0;i<n;i++)
        {
            if(a[i]==a[r])
            {
                e=i;
                cout<<e<<endl;
            }
        }
        // e is the index of mid value of array.

        for(i=0;i<r;i++)
        {
               int count=-1;
            if(a[i]>a[r])
            {
                while(a[i]!=1)
                {
                    a[i]--;
                    count++;
                }
            }
            cout<<count<<endl;
        }

    }
}
