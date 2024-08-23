#include<iostream>
using namespace std;
int gcd(int ,int);
int main()
{
	int m,n;
	cout<<"Enter number:";
	cin>>m;
	cout<<"Enter number:";
	cin>>n;
	cout<<gcd(m,n);
	
}
int gcd(int m,int n)
{
	if (n<=0 || m<=0)
   {
	   	return 0;}
	   	
	while(n!=m)
	{
		if(n>m)
		n=n-m;
		
		else
		m =m-n;
	}
	return n;
}
