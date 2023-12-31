/*Case Study 1
  The proper divisor of an integer N are the positive divisors less than N, a positive integer is said 
  to be DEFICIENT, PERFECT or ABUNDANT numbers if the sum of its proper divisors is less than, equal to 
  or greater than the number respectively. Write a program using function call by reference to input 
  integer N and call function KOMPUTE to determine if integer N is DEFICIENT, PERFECT or ABUNDANT .*/

#include<stdio.h>
#include<conio.h>

int KOMPUTE (int i, int num, int *s) {
	for(i = 1, *s = 0; i < num; i++) {
		if((num % i) == 0) {
			printf("%d ", i);
			*s += i;
		}		
	}	
}

main() {
	
	int N, div, sum;
	
	printf("Input N : ");
	scanf("%d", &N);
	
	printf("Proper divisors are ", div);
	
	KOMPUTE (div, N, &sum);
	
	printf("\nSum of proper divisors : %d ", sum);	
	
	if(sum < N) printf("\n%d < %d is DEFICIENT", sum, N);
	else if(sum == N) printf("\n%d = %d is PERFECT", sum, N);
	else printf("\n%d > %d is ABUNDANT", sum, N);
		
	getch();
	return 0;
}
