#include<stdio.h>	
#include<conio.h>		
main (void) {
	int num;
	
	printf("INPUT ANY POSITIVE INTEGER: ");
	scanf("%d", &num);
	
	if (num%9 == 0)
		printf("\nDIVISIBLE BY 9");	
	
	else
		printf("\nNONE DIVISIBLE BY 9");
	
	getch();
}
