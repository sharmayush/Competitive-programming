#include<iostream>
using namespace std; 
int main() 
{	    
      int n,i,j,t,c;
      cin>>t;
      for(j=0;j<t;j++)
      {
      	c=0;
      	cin>>n;
      for (i=2;i<=n/2;i++) 
	  {
          if (n%i==0) 
            {
			 c++;
             break;
         	}
      }
      if (c==0) 
		cout<<"yes"<<endl;
      else 
		cout<<"no"<<endl;
    }
     return 0;    
}
