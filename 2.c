#include <stdio.h>
int main() {
	int kor, eng, mat, tot;
	float avg;
	
	scanf("%d %d %d", &kor, &eng, &mat);
	
	tot = kor + eng + mat;
	avg = tot / 3.0;
	
	printf("\n국어: %d\n영어: %d\n수학: %d\n", kor, eng, mat);
	printf("\n총합: %d\n평균 점수: %.2f", tot, avg);
	
	return 0;
}
