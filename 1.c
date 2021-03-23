#include <stdio.h>
int main() {
	float Ko, En, Ma;
	printf("{국어}, {영어}, {수학}\n-> ");
	scanf("%f, %f, %f", &Ko, &En, &Ma);
	printf("\n총점: %.0f\n평균: %.2f", (Ko+En+Ma), (Ko+En+Ma)/3);	
	return 0;
}
