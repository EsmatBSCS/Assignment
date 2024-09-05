#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout <<"Enter character or alphabet:"<<endl;
	cin >>ch;
	if((ch>='A')&& (ch<='Z'))
	cout <<ch<<"alphabet"<<endl;
      else if((ch>='a')&& (ch<='z'))
	cout <<ch<<"alphabet"<<endl;
	    else	if((ch>='0')&& (ch<='9'))
	cout <<ch<<"digit"<<endl;         
	        else
	cout <<ch<<"symbol"<<endl;
}
	
