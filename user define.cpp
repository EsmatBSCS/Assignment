#include <iostream>
using namespace std;
double larger(double x, double y);
double compareThree(double x, double y, double z);
int main()
{
   double one, two; 
      cout << " The larger of 5 and 10 is "<< larger(5, 10) << endl; 
      cout << " Enter two numbers: "; 
      cin >> one >> two; 
      cout << endl; 
      cout << " The larger of " << one<< " and " << two << " is "<< larger(one, two) << endl; 

      cout << " The largest of 43.48, 34.00, "<< "and 12.65 is "<< compareThree(43.48, 34.00, 12.65)<< endl;  
    return 0;
}
   double larger(double x, double y)
{
     double max;
       if (x >= y)
        max = x;
       else
         max = y;
     return max;
}
     double compareThree (double x, double y, double z)
{
    return larger(x, larger(y, z));
}
