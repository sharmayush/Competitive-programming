#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        int mid=n/2;
        int midv,midIn;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==arr[mid])
            {
                midv=arr[mid];
                midIn=i;
            }
        }
     //   cout<<midv<<endl;
        if(n%2!=0)
        {
                if(arr[0]>midv)
                {
                    for(int j=0;j<midIn;j++)
                    {
                    int l=1;
                    if(arr[j]==l)
                    {
                        l++;
                    }
                    }
                }
                else if(i>midIn)
                {
                for(int k=midIn;k>=n-1;k++)
                {
                    int m=midv-1;
                    if(arr[k]==m)
                    {
                        m--;
                    }
                }
                }
            }
            else if(i==midIn)
            {
                continue;
            }

        }
        cout<<"yes"<<endl;
        }
        else if(n%2==0)
        {
            cout<<"no"<<endl;
        }
    }
}
