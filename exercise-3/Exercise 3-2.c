/*PROGRAMMING EXERCISE 3-2
  Write a program that would store 11 numbers in a one-dimensional array. Store the sum of the two succeeding pairs 
  in another array. Hence, only 10 integers will be stored in the second array.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int a[11], b[10], n;
	
	printf("Enter 11 numbers: ");
	for(n = 0; n < 11; n++)
	{
		scanf("%d", &a[n]);
	}
	
	
	printf("\nSUM of TWO succeeding pairs: ");
	for(n = 0; n < 10; n++)
	{
		b[n] = a[n] + a[n+1];
		printf("%d ", b[n]);	
	}
	
	getch();
	return 0;
}
