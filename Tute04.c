/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x, int y); 
int maximum(int x, int y);
int multiply(int x, int y); //function prototypes
int main(void)
{
   int no1, no2; //variable declarations
  
   printf("Enter a value for no 1 : "); //prompt user to input
   scanf("%d", &no1);
   printf("Enter a value for no 2 : "); //prompt user to input
   scanf("%d", &no2);
  
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2)); //calling functions and printing outputs
  
   return 0;
}

int minimum(int x, int y) //function implementation
{
  if(x < y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int maximum(int x, int y) //function implementation
{
  if(x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int multiply(int x, int y) //function implementation
{
  return x * y;
}