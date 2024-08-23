#include<iostream>
using namespace std;
int reduce(int & ,int &);
int gcd(int ,int);
int main()
{
	int num,denom;
	cout<<"Enter the numerator:";
	cin>>num;
	cout<<"Enter the denominator:";
	cin>>denom;
	cout<<gcd( num,denom);
	cout<<reduce(num ,denom);
	cout<< num<<"/"<<denom;
}
      int reduce(int &num ,int &denom)
      {
      	if (num <= 0 || denom <= 0)
 return 1;
 else
 {
 int common = gcd(num ,denom) ;
 num =num/ common;
 denom =denom/ common;
		   }
	  }
	 int gcd(int num,int denom)
{
	if (num<=0 || denom<=0)
   {
	   	return 0;}
	   	
	while(num!=denom)
	{
		if(num>denom)
		num=num-denom;
		
		else
		denom =denom-num;
	}
	return num;
}
