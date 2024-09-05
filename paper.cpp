#include<iostream>
using namespace std;
int lengthofdigit(int);
int main()
{
	int num;
	cout<<"Enter  number:";
	cin>>num;
	while(num<0)
	{
		cout<<"Plz enter +ve number:"<<endl;
		cout<<"enter number:";
		cin>>num;
		
	}
}
   int digit;
      digit = lengthofdigit(num);
      int  nums[digit];
   while(num!=0)
   {
   	num[i] =num%10;
   	i++;
   	num =num/10;
   }
   
   	for(int i=digit-1 ;i<=0 ;i--)
   	{
   		switch(num[i])
   		{
   			case 0:    cout<<"zero";     break;
   			case 1:    cout<<"one";     break;
   			case 2:    cout<<"two";     break;
   			case 3:    cout<<"three";     break;
   			case 4:    cout<<"four";     break;
   			case 5:    cout<<"five";     break;
   			case 6:    cout<<"six";     break;
   			case 7:    cout<<"seven";     break;
   		    case 8:    cout<<"eight";     break;
		   	case 9:    cout<<"nine";     break;
		   }
	   }
	   
	   int length of digit(int n)
	   {
	   	int count =0;
	   	while(n!=0)
	   	{n=n/10;
	   	count++;
		   }
		   return count;
	   }
   
