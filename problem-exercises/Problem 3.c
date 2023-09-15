/*Problem 3
 Write a program that will input non-negative integer to determine if the integer is DWARF or NOT. 
 An integer is said to be DWARF if the sum of its factors is greater than the half of the number.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n, f, s, h;
	
	printf("Input number: ");
	scanf("%d", &n);
	printf("Factors are ", n);
	
	for (f = 1, s = 0; f < n; ++f)
	{
		if (n % f == 0)
		{
			printf("%d ", f);
			s += f;
		}
	}
	
	printf("\nSum of its factors is %d\n", s);
	h = f / 2;
	printf("Half of %d is %d\n", n, h);
	
	(s > h)? printf("%d is DWARF", n) : printf("%d is NOT A DWARF", n); 
	
	getch();
}
