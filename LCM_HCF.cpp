//HCF & LCM
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a,b,h,n,i;
	
	cout<<"Enter the two numbers to find its LCM & HCF ";
	cin>>a>>b;
	
	if(a==b)
	{
		cout<<"LCM = "<<a<<"\nHCF = "<<b;
		return 0;
	}
	
	if(a>b)
	  n=b;
	else
	  n=a;
	  
	for(i=n;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{  h=i; break;
		}
			
	}
			
	cout<<"LCM = "<<a*b/h<<"\nHCF = "<<h;
	return 0;
}

