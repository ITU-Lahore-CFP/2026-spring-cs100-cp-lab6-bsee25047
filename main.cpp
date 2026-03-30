#include "functions.h"


int main() {
 int n;
 cout<<"Enter a number ";   //getting input from userr
 cin>>n;
 cout<<"Sum of square "<<sumOfSquares(n)<<endl;   //calling function

int num;
cout << "Enter a number: ";   //getting input from user
cin >> num;
cout << "Factorial is " << findFactorial(num) << endl;   //calling function

return 0;
}