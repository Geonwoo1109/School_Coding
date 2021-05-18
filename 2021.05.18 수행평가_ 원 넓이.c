#include <stdio.h>

int main() {
	int r, Num;
	
	printf("반지름과 숫자: ");
	scanf("%d %d", &r, &Num);
	
	if (Num == 1) {
		printf("원의 둘레: %.2f", 2*3.14*r);
	} else if (Num == 2) {
		printf("원의 면적: %.2f", 3.14*r*r);
	} else {
		printf("입력값이 잘못되었습니다.");
	}
	
}
