#include<stdio.h>	
#include<conio.h>	
main (void)
{
	char ans;
	int a, b, h;
	
	printf("Input the first character of figure name: ");
	scanf("%s", &ans);
	
	
	if (ans == 'R' || ans == 'r')
	{
		printf("\nInput base: ");
		scanf("%d", &b);
		printf("\nInput height: ");
		scanf("%d", &h);
		a = b * h;
		printf("\nArea of a Rectangle: %d", a);	
	}
		
	else if (ans == 'T' || ans == 't')
	{
		printf("\nInput base: ");
		scanf("%d", &b);
		printf("\nInput height: ");
		scanf("%d", &h);
		a = .5 * b * h;
		printf("\nAREA of a Triangle: %d", a);	
	}
	
	else
		printf("\nINVALID!");
		
	getch();
}
