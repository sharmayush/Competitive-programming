#include<stdio.h>
int main()
{
	long int n,temp,i,t;
	scanf("%d",&t);
	while(t--)
{
	int sum=0,mode,count=0;
	scanf("%d",&n);
	temp=n;
	sum=sum+temp%10;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		mode=temp%10;
		temp=temp/10;
	}
	sum=sum+mode;
	printf("%d\n",sum);
}
	return 0;
} 
