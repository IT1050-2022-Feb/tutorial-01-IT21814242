/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(void)
{
  int mark1, mark2;
  float avg; //variable declarations

  printf("Enter subject 1 marks : "); //prompt user to input
  scanf("%d", &mark1);
  printf("Enter subject 2 marks : "); //prompt user to input
  scanf("%d", &mark2);

  avg = (mark1 + mark2)/2; //calculating average

  printf("Average is %.2f", avg); //printing output
  
  return 0;
}

