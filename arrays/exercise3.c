/*ARRAY EXERCISE 3
  An instructor gives a multiple choice test which consists of 5 questions, each of which is answered by a choice of one 
  of the numbers one to five. The program should grade the test. If the student's choice is, 1 give 1 point. 
  If the choice is 2, give 2 points. 3 points if the choice answer is 3 and 4 points for answer 4 and choice 5 is 5 points. 
  Otherwise, no point is given to other choices. Print out the average score of the student on the test.
*/

#include<stdio.h>
#include<conio.h>

main() {
	int a[5], n;
	float sum, ave;
	char name[30];
	
	printf("Enter student name: ");
	scanf("%s", &name);
	
	for(n = 0; n < 5; n++)	{
		printf("Enter Answer #%d? ", n+1);
		scanf("%d", &a[n]);
		if (a[n] <= 5) 
			sum += a[n];
	}
	
	ave = sum / 5;
	printf("\n%s, your total score is %.f and your average score is %.1f.", name, sum, ave);
	getch();
}
