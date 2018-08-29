#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=20)
    {
        while(t--)
        {
            int n,a,b,c,limit=0;
            cin>>n;
            int arr[limit];
            arr[0]=1;
            if(n>=1 && n<=1000000000)
            {
                cin>>a>>b>>c;
                if(a>=1 && b>=1 && c>=1 && a<=1000000 && b<=1000000 && c<=1000000)
                {
                    while (n%2 == 0)
                    {
                        limit++;
                        arr[limit]=2;
                       // printf("%d ", 2);
                        n = n/2;
                    }

                    for (int i = 3; i <= sqrt(n); i = i+2)
                    {
                        while (n%i == 0)
                        {
                            limit++;
                            arr[limit]=i;
                         //   printf("%d ", i);
                            n = n/i;
                        }
                    }
                    if (n > 2)
                    {
                        limit++;
                        arr[limit]=n;
                       // printf ("%d ",n);
                    }
                }
            }
            //cout<<limit<<endl;
            for(int i=0;i<=limit;i++)
            {
                cout<<arr[i]<<endl;

            }
        }
    }
}
