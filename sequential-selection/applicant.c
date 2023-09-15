#include<stdio.h>
#include<conio.h>

main(void) {
    int rc, cc, age;
    float h;
    
    printf("\t\tJEDI KNIGHT ACADEMY");
    printf("\n\nAre you recommended by Jedi Master Obi Wan?");
	printf("\n1 - YES\t\t0 - NO\t\t");
    scanf("%d" ,&rc);
     
	if (rc == 1) {
		printf("\nACCEPTED!");
	}
	
	else {
		printf("\nInput your height: ");
        scanf("%f", &h);
        printf("Input your age: ");
        scanf("%d", &age);
        printf("Are you a citizen of Planet Endor? ");
		printf("\n1 - YES\t\t0 - NO\t\t");
		scanf("%d", &cc);
        	
        if (h >= 200 && age >= 21 && age <= 25 && cc == 1) {
        	printf("\nACCEPTED!");
		}
			
		else {
			printf("\nDECLINED!");					
		}
	}
    getch();
}
