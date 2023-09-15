#include<stdio.h>
#include<conio.h>

void kar1(char *c, char b, char *a) {
	*a = 'c'; b = 'a'; *c = 'b';
	printf("%c %c %c\n", *a, b, *c);
}

void kar2(char *b, char *a, char *c) {
	*a = 'b'; *b = 'c'; *c = 'a';
	printf("%c %c %c\n", *a, *b, *c);
}

main() {
	char a = 'a', b = 'b', c = 'c';
	
	printf("%c %c %c\n", a, b, c);
	kar1(&a, b, &c);
	
	printf("%c %c %c\n", a, b, c);
	kar2(&a, &b, &c);
	
	printf("%c %c %c\n", a, b, c);
	kar1(&c, b, &a);
	
	printf("%c %c %c\n", a, b, c);
	kar2(&c, &a, &b);
	
	getch();
	return 0;
}

/*	main			kar1			kar2
	a	b	c		*c	b	*a		*b	*a	*c	
	a	b	c		c=c	a	a=b
	b	b	c						b=b	a=c	c=a
	c	b	a		c=c	a	a=b
	c	b	b						b=b	a=c	c=a
*/
