#include<stdio.h>
#include<conio.h>

main()
{
	int a, b = 0;
	static int c[10]= {1,2,3,4,5,6,7,8,9,10};
	
	for(a = 0; a < 10; a++)
	{
		if (a % 2 == 0)
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
	c[]		a	a%2==0		b
	c[0]=1	0	0%2 - yes	0+1=1
	c[1]=2	1	1%2 - no	1
	c[2]=3	2	2%2 - yes	1+3=4
	c[3]=4	3	3%2 - no	4
	c[4]=5	4	4%2 - yes	4+5=9
	c[5]=6	5	5%2 - no	9
	c[6]=7	6	6%2 - yes	9+7=16
	c[7]=8	7	7%2 - no	16
	c[8]=9	8	86%2 - yes	16+9=25
	c[9]=10	9	9%2 - no	25
*/
