#include <iostream>
using namespace std;
int main()
{
int counter; 
int sum; 
int n;
cout << " Enter the number of positive "<< "integers to be added: "; 
cin >> n; 
sum = 0; 
cout << endl; 
for (counter = 1; counter <= n; counter++) 
sum = sum + counter;
cout << " The sum of the first " << n<< " positive integers is " << sum<< endl; 
return 0;
}
