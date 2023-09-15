#include<stdio.h>	
#include<conio.h>
#include<math.h>		
main (void) {
	float a, b, c;
	
	printf("Side A = ");
	scanf("%f", &a);
	
	printf("Side B = ");
	scanf("%f", &b);
	
	c = (a*a) + (b*b);
	printf("Hypotenuse C = %.2f", sqrt(c));	
	
	getch();
}
