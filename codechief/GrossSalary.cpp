#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double price,sum,HRA,DA;
		cin>>price;
		if(price<1500&&price>=1)
		{
			HRA=price*(.10);
			DA=price*(.90);
			sum=price+HRA+DA;
			cout<<sum<<endl;
		}
		else
		{
			HRA=500;
			DA=price*(.98);
			sum=price+HRA+DA;
			cout<<sum<<endl;
		}
	} 
	return 0;
}
