#include <stdio.h>

int main() {
	int a, b, Num, Count=0;
	scanf("%d", &Num);
	for (a=1; a<=Num; a++) {
		for (b=1; b<=Num; b++) {
			if (a == b || a+b == Num+1) {
				printf("*");
				Count++;
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("Star: %d \nStar: %d", Count, Num*2 - 1);
}
