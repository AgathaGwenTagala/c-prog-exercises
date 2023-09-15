#include<stdio.h>
#include<conio.h>

main()
{
	int a, b = 0;
	static int c[10]= {1,2,3,4,5,6,7,8,9,10};
	
	for(a = 0; a < 10; a++)
	{
		if ((c[a] % 2) == 0)
		{
			b += c[a];
			printf("%d\n", b);
		}
		
		else 
		{
			printf("--\n");	
		}
	}
	
	printf("b = %d", b);
	
	getch();
	return 1;
}

/*
	c[]		a	c[a]%2==0	b
	c[0]	1	1%2 - no	0
	c[1]	2	2%2 - yes	0+2 = 2	
	c[2]	3	3%2 - no	2
	c[3]	4	4%2 - yes	2+4 = 6
	c[4]	5	5%2 - no	6
	c[5]	6	6%2 - yes	6+6 = 12
	c[6]	7	7%2 - no	12
	c[7]	8	8%2 - yes	12+8 = 20
	c[8]	9	9%2 - no	20
	c[9]	10	10%2 - yes	20+10 = 30
*/
