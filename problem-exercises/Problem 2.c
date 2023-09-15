/*Problem 2
 In a song TWELVE DAYS OF CHRISTMAS, gifts are bestowed upon the singer in the following pattern: 
 on the first day she received a partridge in a pear tree; on the 2nd day, she received two turtle doves 
 and a partridge in a pear tree; on the 3rd day, she received 3 french hens, two turtle doves and a partridge 
 in a pear tree. These continue up to the twelve days. write a program to store the gifts she received per day 
 and compute and print the total gifts she received all in all.*/

#include<stdio.h>
#include<conio.h>

void main() {
	int day, gift;
	
	for(day = 1, gift = 0; day <= 12; day++) {
        gift = gift + day;
    }
    
	printf("The singer received %d gifts in total.\n", gift);
	getch();
}

/*
	day	gift
	1	1
	2	2+1
	3	3+2+1
	4	4+3+2+1
	5	5+4+3+2+1
	6	6+5+4+3+2+1
	7	7+6+5+4+3+2+1
	8	8+7+6+5+4+3+2+1
	9	9+8+7+6+5+4+3+2+1
	10	10+9+8+7+6+5+4+3+2+1
	11	11+10+9+8+7+6+5+4+3+2+1
	12	12+11+10+9+8+7+6+5+4+3+2+1
	
	The sum of x and y is 12.
*/
