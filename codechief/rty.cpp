#include<iostream>
#include<string>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int i,flag=0;
        string a;
        cin>>a;
        for(i=0;i<(a.length());i++)
        {
            long int j=i*2;
            long int k=((2*i)+1);
            int r=a[i];
            if(r>=65&&r<=90)
            {
            if(a[0]==a[j])
            {
                flag=0;
            }
            else if(a[1]==a[k])
            {
                flag=0;
            }
            else
            flag=1;
            }
            else
            flag==1;
        }
        if(flag==0)
            cout<<"Yes";
        else if(flag==1)
            cout<<"No";
    }
    return 0;
}
