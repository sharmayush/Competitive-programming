#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    int n,t,temp1,temp2,i,m;
    cin>>t;
    while(t--)
    {
        int a,b,flag,c,d,sum =1,n =0,countable=1,countable1;
        cin>>a>>b;
/*
        while(a/10!=0)
        {
            countable++;
        }
        countable= countable+1;
        while(b/10!=0)
        {
            countable1++;
        }
        countable1= countable1+1;
*/
        if(countable<=3)
        {
            if((a%10)>=5&&(b%10)>=5)
            {
                c = a%10;
                d = b%10;
                sum = (c+d)%10;
                a = a/10;
                b = b/10;
                sum = sum + 10*n;
                n++;
            }
        }
        cout<<sum<<endl;
    }
}
