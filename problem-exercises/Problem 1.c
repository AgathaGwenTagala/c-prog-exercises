/*Problem 1
 JD Wine company wants to determine how long it will take a leaking barrel to fill a bucket underneath it. 
 A bucket can hold 2,452  drops of wine. The barrel leaks at the rate of 162 drops of wine per hour. At the 
 end of every 3rd hour, a cat licks 28 drops of wine from the bucket. Write a program that will calculate 
 and print how many hours will the bucket be filled and how many drops of wine the cat drunk.*/

#include<stdio.h>
#include<conio.h>

void main() {
	int bucket, hour, cat;
	
	for (bucket = 0; bucket < 2452; hour++)	{
		bucket += 162;
		//printf("hour %d. current total drops is %d.\n", hour, bucket);
		
		if (hour % 3 == 0) {
			bucket -= 28;
			cat += 28;
			//printf("hour %d. current total drops is %d. cat lick %d\n", hour, bucket, cat);
		}
	}
	
	printf("The bucket was filled at %d hours.\nMuning licked %d drops of wine.\n", hour-1, cat);
	getch();
}

/*
	hour	bucket
	1		162
	2		324
	3		468-28=458 
	4		620
	5		782
	6		944-28=916
	7		1078
	8		1240
	9		1402-28=1374
	10		1536
	11		1698
	12		1860-28=1832
	13		1994
	14		2156
	15		2318-28=2290
	16		2452
	
	The bucket was filled at 16 hours.
	Muning licked 140 drops of wine.
*/
