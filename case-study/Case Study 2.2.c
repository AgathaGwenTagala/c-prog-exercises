/*Case Study 2
  Write a program to call function TRIANGLE to determine if a given sides is equilateral, isosceles or scalene. 
  A triangle is EQUILATERAL if all the three sides have the same length. ISOSCELES if only two sides have the 
  same length and SCALENE if no sides have the same length. Input the length of the three sides and print whether 
  the triangle is equilateral, isosceles or scalene.*/

#include <stdio.h>

double triangle (double a, double b, double c) {
	if (a == b && a == b) printf("\nThis is an EQUILATERAL triangle.");
    else if (a == b || b == c || a == c) printf("\nThis is an ISOSCELES triangle.");
    else printf("\nThis is a SCALENE triangle.");
}

int main() {
	double x, y, z;
	printf("Enter three sides of triangle: ");
    scanf("%lf %lf %lf", &x, &y, &z);
	triangle(x, y, z);
}
