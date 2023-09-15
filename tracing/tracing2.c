#include<stdio.h>
#include<conio.h>

void kar(char *a, char *b, char *c) {
	*a = 'c'; *b = 'a'; *c = 'b';
	printf("%c %c %c\n", *a, *b, *c);
}

main() {
	char a = 'c', b = 'b', c = 'a';
	
	printf("%c %c %c\n", a, b, c);
	kar(&a, &b, &c);
	
	printf("%c %c %c\n", a, b, c);
	kar(&c, &b, &a);
	
	printf("%c %c %c\n", a, b, c);
	kar(&b, &a, &c);
	
	printf("%c %c %c\n", a, b, c);
	getch();
	return 0;
}

/*	main			kar1
	a	b	c		*a	*b	*c
	c	b	a		a=c	b=a	c=b
	c	a	b		c=c	b=a	a=b
	b	a	c		b=c	a=a	c=b
	a	c	b	
*/






