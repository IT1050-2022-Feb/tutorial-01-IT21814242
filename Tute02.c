/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
int main(void)
{
  int distance; //variable declaration
  float amount; //variable declaration

  printf("Enter the distance the van has travelled (km) : "); //prompt user to input
  scanf("%d", &distance);

  if(distance <= 30)
  {
    amount = distance * 50; //calculating amount
  }
  else
  {
    amount = (30 * 50) + (distance - 30) * 40; //calculating amount
  }

  printf("Amount to be paid = Rs.%.2f", amount); //printing output
  
  return 0;
}
