#include<iostream>
using namespace std;
void swap(float &,float &);
int main()
{
	float x , y ;
	cout <<"Enter number:";
	cin>>x;
	cout <<"Enter the number:";
	cin>>y;
    swap(x,y);
	cout<<x<<""<<y<<endl;
	
}
   void swap(float &x, float &y)
   {
   	float temp ;
   	temp =x;
   	x=y;
   	y=temp ;
   	
   }
