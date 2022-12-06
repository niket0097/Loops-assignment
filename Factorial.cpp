#include<iostream>

using namespace std;

int main()
{
	int n, f=1;
	
	cout<<"Enter number to find its factorial ";
	cin>>n;
	
	
	while(n>0)
	{
		f*=n;
		n--;		
	}
	
	
	cout<<"\nFactorial of the number is "<<f;
	
	return 0;
	
}
