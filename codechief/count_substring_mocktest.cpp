#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num,quotient=0,check=0;
        cin>>n;
        cin>>num;
        //cout<<n<<" "<<num<<endl;
        while(num>0)
        {
            quotient = num/10;
            num = num%10;
            check++;
        }
        if(check==n)
        {
            cout<<"yes"<<endl;
        }
    }
}
