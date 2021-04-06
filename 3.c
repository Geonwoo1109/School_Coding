#include <stdio.h>

int main(void) {
	
	int i, j, sum = 0;
	
	printf("당신의 수: ");
	scanf("%d", &j);
	printf("\n");
	
	for (i=1; i<j+1; i++) {
		sum = sum + i;
		printf("%d\n", i);
	}
	printf("\n");
	printf("%d", sum);
	
	return 0;
}
