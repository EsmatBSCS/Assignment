#include<iostream>
using namespace std;
bool isprime(int);
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	cout<<isprime(n);
	
}

   bool isprime(int x)
   {
   	int count=0;
   	for (int i=1;i<=x ;i++)
   	{
   		if(x%i==0)
   		count++;
	   }
	   if(count<=2)
	   return 1;
	   else
	   return 0;
   }
