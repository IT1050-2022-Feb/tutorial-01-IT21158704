/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    
	float subject1, subject2;
	
	printf("Enter Subject 1 Result : ");
	scanf("%f",&subject1);
	
	printf("Enter Subject 2 Result : ");
	scanf("%f",&subject2);
	
	printf("\nAverage = %.2f",(subject1 + subject2 )/2);
	
  return 0;
}

