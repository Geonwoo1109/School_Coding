#include <stdio.h>

int main() {
	int a, b, Num=0, Sum=0;
	
	printf("���� 2��: ");
	scanf("%d %d", &a, &b);
	
	printf("\n3���: ");
	int i;
	for (i=a; i<=b; i++) {
		if (i%3 == 0) {
			printf("%3d", i);
			Num++;
			Sum = Sum + i;
		}
	}
	
	printf("\n%d���� %d���� 3��� ����: %d", a, b, Num);
	printf("\n%d���� %d���� 3��� ��: %d", a, b, Sum);
}
