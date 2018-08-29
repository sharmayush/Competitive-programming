#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag= 0;
        cin>>n;
        int arr[n];
        int k = n/2;
        int w = k-1;
        int a = k+1;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n%2!=0)
        {
            for(int i=0,j=n-1;i<k;i++,j--)
            {
                if(arr[i]==arr[j])
                {
                    flag++;
                }
                else if(arr[i]>7||arr[j]>7)
                    flag=0;
            }
            if(flag==k&&arr[k]<=7)
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
}
