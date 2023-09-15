#include<stdio.h>	
#include<conio.h>	
main (void)
{
	int pol;
	
	printf("POLLUTION INDEX: ");
	scanf("%d", &pol);
	
	if (pol < 35)
		printf("\nCLASSIFICATION: PLEASANT");	
	
	else if (pol >= 35 && pol <= 65)
		printf("\nCLASSIFICATION: UNPLEASANT");
		
	else
		printf("\nCLASSIFICATION: HAZARDOUS");
	
	getch();
}
