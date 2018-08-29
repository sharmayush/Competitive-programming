#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mini=n,x,y,flag=0,fnl;
        cin>>n;
        cin>>x;
        cin>>y;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==x)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]==y)
                    {
                      if(mini>j-i)
                      {
                          mini = j-i;
                      }
                    }
                }
            }
        }
        cout<<mini<<endl;
    }
}
