#include<iostream>
using namespace std;
 
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int Hard,Tensile;
		double Carbon;
		cin>>Hard>>Carbon>>Tensile;
		if(Hard>50&&Carbon<0.7&&Tensile>5600)
		{
			cout<<"10"<<endl;
		}
		else if(Hard>50&&Carbon<0.7)
		{
			cout<<"9"<<endl;
		}
		else if(Carbon<0.7&&Tensile>5600) 
		{
			cout<<"8"<<endl;
		}
		else if(Hard>50&&Tensile>5600)
		{
			cout<<"7"<<endl;
		}
		else if(Hard>50||Carbon<0.7||Tensile>5600) 
		 
		{
			cout<<"6"<<endl;
		}
		else 
		{
			cout<<"5"<<endl;
		}
	}
	return 0;
}
