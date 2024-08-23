#include<iostream>
using namespace std;
int enough(int );
int main()
{
	int i;
	cout<<"Enter the number:";
	cin>>i;
	cout<<enough(i);
	
}


   int enough(int goal)
{
	int  i=1,sum=1;
	while(sum<goal)
	sum += ++i;
	return  i;
}
