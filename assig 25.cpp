#include<iostream>
using namespace std;
char digitname(int);
int main()
{
	int n;
	cout<<"Enter the number 1 to 9:";
	cin>>n;
	cout<<digitname(n);
	
	
	
	
}
   char digitname(int n)
   {
   	switch(n)
   	{
	   case 1:
   	cout<<"one";
   	break;
   	case 2:
   	cout<<"two";
   	break;
   	case 3:
   	cout<<"three";
   	break;
   	case 4:
   	cout<<"four";
   	break;
   	case 5:
   	cout<<"five";
   	break;
   	case 6:
   	cout<<"six";
   	break;
   	case 7:
   	cout<<"seven";
   	break;
   	case 8:
   	cout<<"eight";
   	break;
   	case 9:
   	cout<<"nine";
   	break;
   	default:
   	cout<<" digit error"<<endl;
   }
   }
