#include<stdio.h>
#include<string.h>

void main() {
	char mae[5], paolo[15];
	char weekday[10] = "Wednesday";
	char weekends[9] = "Saturday";
	char week[18] = "WednesdaySaturday";

	printf(toupper(strrev(weekends)));
	printf("%zu", strlen(strcat(weekday,weekends)));
	printf(strlwr(strdup(strcpy(mae, weekends)))); 
	printf(strnset(weekday, '@', strlen(weekends))); 
	printf(strrev(strchr(strcat(paolo, strcpy(mae, weekday)),'d')));  	
}