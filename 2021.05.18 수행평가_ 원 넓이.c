#include <stdio.h>

int main() {
	int r, Num;
	
	printf("�������� ����: ");
	scanf("%d %d", &r, &Num);
	
	if (Num == 1) {
		printf("���� �ѷ�: %.2f", 2*3.14*r);
	} else if (Num == 2) {
		printf("���� ����: %.2f", 3.14*r*r);
	} else {
		printf("�Է°��� �߸��Ǿ����ϴ�.");
	}
	
}
