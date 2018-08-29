#include<iostream>
#include<string>
using namespace std;
int main()
{
	int memcmp( const void *a1, const void * a2, size_t num );
	char a1[]= "ayush";
	char a2[]= "sharma";
	int n;
	n = memcmp (a1,a2,sizeof(a1));
	if(n>0)
	{
		cout<<a1<<a2<<"a1 is greater than a2"<<endl;
	}
	else if(n<0)
	{
		cout<<a1<<a2<<"a2 is greater than a1"<<endl;
	}
	else
	cout<<a1<<a2<<"a1 is the same as a2"<<endl;
	return 0;
}
