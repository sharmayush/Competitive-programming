#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll qp,tm,vn,qm,temp,rt,yu;
	cin>>qp;
	while(qp--)
	{
		temp=0;
		cin>>rt>>yu;
		if(rt%2!=0)
		{
		//	cout<<"aaya    "<<endl;
			for(tm=0;tm<yu;tm++)
			{
				cin>>vn>>qm;
				//arr[vn-1]++;
			//	arr[qm-1]++;
			}
			temp=0;
		}
		else if(rt%2==0 && yu>rt/2)
		{
		//	cout<<"aaya :(   "<<endl;
			for(tm=0;tm<yu;tm++)
			{
				cin>>vn>>qm;
				//arr[vn-1]++;
			//	arr[qm-1]++;
			}
			temp=1;
		}

		else
		{
			ll arr[rt]={0};
			for(tm=0;tm<yu;tm++)
			{
				cin>>vn>>qm;
				if(vn<=rt && qm<=rt)
				{
					arr[vn-1]++;
					arr[qm-1]++;
				}

			}
			for(tm=0;tm<rt;tm++)
			{
				if(arr[tm]==1)
				temp++;
			}

		}
		if((rt-temp)%2==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;
}
