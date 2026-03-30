#include "functions.h"


int sumOfSquares(int n) 
{
    int sum =0;       //decarling and iniliazitating
    if (n == 0) {     //using if statement
        return 0; 
    }
    return n * n + sumOfSquares(n - 1);     //recursive case
}

int findFactorial(int num)
{
    if (num == 0 || num == 1) {    //using if statement
        return 1;   
    }
    return num * findFactorial(num - 1);    //recursive case
}




