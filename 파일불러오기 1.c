#include <stdio.h>

int main(void) {
	int Ko, En, Math, Sum, Num;
	char Name_[12];
	
	//�ѱ� �ȱ������� �޸��� ���ڵ� �����  ANSI�� �ϱ� 
	FILE *fp1;
	fp1 = fopen("data1.txt", "r");
	
	printf("�ο���: ");
	scanf("%d", &Num);
	printf("\n");
	
	int i;
	
	for (i=1; i<=Num; i++) {
		//scanf("%s %d %d %d", &Name_, &Ko, &En, &Math);
		fscanf(fp1, "%s %d %d %d", &Name_, &Ko, &En, &Math);
		Sum = Ko+En+Math;
	
		printf("%20s | %3d %3.3f", Name_, Sum, Sum/3.0);
		printf("\n");
	} 
	fclose(fp1);
	return 0;
}
