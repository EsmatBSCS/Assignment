#include<iostream>
using namespace std;
void alpha();
int bravo();
double charlie(int);
int main()
{
	cout<<bravo();
}
  void alpha()
 { 
 cout<<"I am in alpha:";
 cout<<charlie(2);
 }
 int bravo()
 {
 	int n=10;
 	alpha();
 	return n;
 }
   double charlie(int n)
   {
   	double m=3.5;
   	return m*n;
   }
   
