#include <stdio.h>

int main() {
	int a, b, Num, Count=0;
	scanf("%d", &Num);
	printf("\n\n");
	
	/*156p. 1*/
	printf("156p.1)\n");
    for (a=1; a<=Num; a++) {
		for (b=1; b<=a; b++) {
			printf("*");
			Count++;
		}
		printf("\n");
	}
	printf("Star: %d\n\n", Count);
	Count = 0;
	
	/*피라미드 1*/
	printf("P-1)\n");
	for (a=1; a<=Num; a++) {
		for (b=a; b<=Num; b++) {
			printf(" ");
		}
		for (b=1; b<=a; b++) {
			printf("* ");
			Count++;
		}
		printf("\n");
	} 
	printf("Star: %d\n\n", Count);
	Count = 0;
	
	/*피라미드 2*/
	printf("P-2)\n");
	for (a=1; a<=Num; a++) {
	 	for (b=a; b<=Num; b++) {
	 		printf(" ");
		 }
		for (b=1; b<=a*2 - 1; b++) {
		 	printf("*");
			 Count++;		 	
		 }
		printf("\n");
	}
	printf("Star: %d\n\n", Count);
}
