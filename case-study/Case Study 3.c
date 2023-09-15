/*Case Study 3 Military Time
  In military, when one gives a time it is usually in a 24-hour notation (e.g. 1300 means 1:00PM). 
  Write a program that converts from 24-hour notation to 12-hour notation using function.*/

#include<stdio.h>
#include<conio.h>

int time (int mtime)
{
	int hours, minutes;
	hours = mtime / 100;
	minutes = mtime - hours * 100;
	
	if (hours == 0) printf("The time in 12-hour notation is %02d:%02d AM", hours+12, minutes);
	else if (hours > 0 && hours < 12) printf("The time in 12-hour notation is %02d:%02d AM", hours, minutes);
	else if (hours == 12) printf("The time in 12-hour notation is %02d:%02d PM", hours, minutes);
	else if (hours > 12 && hours < 24) printf("The time in 12-hour notation is %02d:%02d PM", hours-12, minutes);
	else printf("The time in 12-hour notation is %02d:%02d AM", hours-12, minutes);
}

main()
{
	int mtime;

	printf("Input time in 24-hour notation: ");
	scanf("%d", &mtime);
	if (mtime >= 0 && mtime <= 2400) time(mtime);
	else printf("ERROR!");
		
	getch();
}
