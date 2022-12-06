//sum of number not divisible by 3 and 5
#include<iostream>

using namespace std;

int main()
{
	int ll, ul,i,sum=0;
	
	cout<<"Enter the lower limit & upper limit , to find the sum of numbers not divisible by 3 & 5 ";
	cin>>ll>>ul;
	
	for(i=ll;i<=ul;i++)
	{
		if(i%3!=0&&i%5!=0)
		 sum+=i;
		 
		 
	}
	
	cout<<"The sum is equal to "<<sum;
	return 0;
	
	
}
