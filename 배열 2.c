#include <stdio.h>

int main() {
	int a, b, tmp;
	int kor[10] = {99, 94, 73, 67, 82, 95, 65, 56, 100, 79};
	
	printf("���� �� ������\n");
	
	for (a=0; a<10; a++) {
		printf("%d ", kor[a]);
	}
	
	printf("\n\n");
	
	for (a=0; a<9; a++) {
		for (b=a+1; b<10; b++) {
			if (kor[a] < kor[b]) {
				tmp = kor[a];
				kor[a] = kor[b];
				kor[b] = tmp;
			}
		}
	}
	
	printf("���� �� ������\n");
	for (a=0; a<10; a++) {
		printf("%d ", kor[a]);
	}
}
