#include <stdio.h>

int main() {
	int a, b, Num=0, Sum=0;
	
	printf("정수 2개: ");
	scanf("%d %d", &a, &b);
	
	printf("\n3배수: ");
	int i;
	for (i=a; i<=b; i++) {
		if (i%3 == 0) {
			printf("%3d", i);
			Num++;
			Sum = Sum + i;
		}
	}
	
	printf("\n%d부터 %d까지 3배수 개수: %d", a, b, Num);
	printf("\n%d부터 %d까지 3배수 합: %d", a, b, Sum);
}
