/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main(void)
{
  int num, i, sum = 0; //variable declarations

  printf("Enter an integer value : "); //prompt user to input
  scanf("%d", &num);

  for(i = 1; i <= num; i++)
  {
    sum = sum + i;
  }

  printf("Sum of the selected range is %d", sum); //printing output
  
  return 0;
}

