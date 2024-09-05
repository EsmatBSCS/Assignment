#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		j=i; 
		
		while(j<=5)
		{
			cout<<"*";
			j++;
     	}
		cout<<"\n";
	}
	return 0;
}
