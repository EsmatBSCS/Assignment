#include<iostream>
using namespace std;
int sumfromto(int first,int last);
int main()
{ 
   int i,l ,totalsum;
   cout<<"Enter the  first number:";
   cin>>i;
   cout<<"Enter the  last number:";
   cin>>l;
   cout <<sumfromto(i,l);
   
   
   }
   int sumfromto(int first,int last)
   
{
   int  totalsum=0;
   if(first <=last)
      for(int i=first;i<=last;i++)
       totalsum =totalsum+i;
       
       else
       for(int i=first;i>=last ;i--)
       totalsum =totalsum + i;
       
       return totalsum;
}
