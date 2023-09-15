/*Case Study 2
  Write a program to call function TRIANGLE to determine if a given sides is equilateral, isosceles or scalene. 
  A triangle is EQUILATERAL if all the three sides have the same length. ISOSCELES if only two sides have the 
  same length and SCALENE if no sides have the same length. Input the length of the three sides and print whether 
  the triangle is equilateral, isosceles or scalene.*/

#include<stdio.h>
#include<conio.h>

int TRIANGLE (int s1, int s2, int s3)
{
	if(s1 == s2 && s2 == s3) printf("\nThis triangle is EQUILATERAL");
	else if(s1 == s2 || s1 == s3 || s2 == s3) printf("\nThis triangle is ISOSCELES");
	else printf("\nThis triangle is SCALENE");
}

void main()
{
	int s1, s2, s3;
	
	printf("Side 1 : ");
	scanf("%d", &s1);
	printf("Side 2 : ");
	scanf("%d", &s2);
	printf("Side 3 : ");
	scanf("%d", &s3);	
	TRIANGLE (s1, s2, s3);
	
	getch();
}
