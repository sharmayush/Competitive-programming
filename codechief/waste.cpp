#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char str[1000],result[1000]={0};
    puts("Enter any string");
    gets(str);
    int len,i,j,count,k=0;
    int n,m=0;
    int flag[1000]={0};
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        count=0;
        n=0;
        for(j=0;j<i;j++)
        {
            if(str[i]==result[j])
            {
                count++;
            }
            else
            n++;

        }
        if(count==0&&n!=0)
        {
            result[k++]=str[i];
            flag[m++]=n;
        }
    }
    for(int i=0;i<k+1;i++)
    {
        cout<<flag[1000]<<" ";
    }
    printf("output string with only unique element\n");
    puts(result);
    return 0;
}
