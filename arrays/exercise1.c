/*ARRAY EXERCISE 1
  Write a program to take two numerical lists of the same length ended with sentinel value and store the lists in 
  array X and array Y, each of which has 20 elements. Let N be the actual number of data values in each list. Store 
  the product of corresponding elements of array X and array Y into third array Z of size 20. Display the square root 
  of the sum of the items in array Z. Make up your own data and be sure to test your program on at least one data set 
  with number of exactly 20 items.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

main() {
	int X[20], Y[20], Z[20], N;
	float sum;
	
	printf("Enter 20 integers: ");
	for(N = 0; N < 20; N++)	{
		scanf("%d", &X[N]);
	}
	
	printf("\nEnter 20 integers: ");
	for(N = 0; N < 20; N++)	{
		scanf("%d", &Y[N]);
	}
	
	printf("\nThe product of the elements in X and Y are ");
	for(N = 0; N < 20; N++)	{
		Z[N] = X[N] * Y[N];
		printf("%d ", Z[N]);
		sum += Z[N];
	}
	
	printf("\n\nThe square root of the sum of the elements in Z is %.2f", sqrt(sum));
	getch();
}
