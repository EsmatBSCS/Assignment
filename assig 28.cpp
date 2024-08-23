#include<iostream>
using namespace std;
void swapfloat(float &, float &)
void sort3(float &a, &b,&c)
int main()
{
	float a,b,c;
	cout <<"Enter three numbers:";
	cin>>a,b,c;
	sort3( a,b,c);
	
}
  void sort3(float &a,float &b,float &c)
  {
  	float temp;
  	if(a<=b && a<=c);
  	else if(a<=b)
  	{
  		swapfloat(c ,b);
  		if(a>b)
  		swapfloat(a ,b);
	  }
	  else
	  {
	  swapfloat(a,b);
	  if(b<=c)
	  else
	  {
	  	swapfloat(b,c);
	  	if(a>b)
	  	swapfloats(a,b)
	  }
      }
  }
  void swapfloat(float &x,float &y)
{
	float z;
	z=x;
	x=y;
	y=z;
}
