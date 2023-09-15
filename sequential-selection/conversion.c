#include<stdio.h>	
#include<conio.h>		
main (void)
{
	char name[20];
	int y;
	float m, d, s;
	
	printf("Name of Dinosaur: ");
	scanf("%s", &name);
	
	printf("\nNumber of Years Ago that %s Lived: ", name);
	scanf("%d", &y);
	
	m = y * 12;
	d = y * 365.25;
	s = d * 86400;
	
	/* 1 year = 12 months
	   1 year = 365.25 days
	   1 day = 86400 seconds */
	
	printf("\nIt has been %.f months, %.f days, and %.f seconds since %s lived.", m, d, s, name);
	
	getch();
}
