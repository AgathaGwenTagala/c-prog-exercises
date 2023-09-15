#include<stdio.h>	
#include<conio.h>		
main (void)
{
	float r, pi = 3.14, a, c;
	
	printf("Radius of a circle = ");
	scanf("%f", &r);
	
	a = pi * r * r;
	c = 2 * pi * r;
	
	printf("\nArea of a circle = %.2f", a);	
	printf("\n\nCircumference of a circle = %.2f", c);
	
	getch();
}
