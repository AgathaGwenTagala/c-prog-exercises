#include<stdio.h>
#include<string.h>

double CCMIT(int a, int b) {
	a = 3;
	b = 4;
}

void main() {
	double x, y;
	CCMIT(x,y);
	printf("%.1lf %.1lf", CCMIT(x,y));	
}