#include <stdio.h>

int main() {
	int Answer, Icecream;
	
	printf("���̽�ũ���� �ֹ��Ͻ÷��� 9���� �����ּ���: ");
	scanf("%d", &Answer);
	printf("\n");
	
	if (Answer == 9) {
		printf("1. ���ݸ�\n2. �ٴҶ�\n3. ������");
		printf("��ȣ�� �������ּ���: ");
		scanf("%d", &Icecream);
		printf("\n");
		
		if (Icecream == 1) {
			printf("���ݸ� ���̽�ũ���� �غ��ϰڽ��ϴ�.");
		} else if (Icecream == 2) {
			printf("�ٴҶ� ���̽�ũ���� �غ��ϰڽ��ϴ�."); 
		} else if (Icecream == 3) {
			printf("ȥ�� ���̽�ũ���� �غ��ϰڽ��ϴ�.");
		} else {
			printf("�޴��� ���� ���̽�ũ���Դϴ�.");
		}
		
	} else {
		printf("�޴� �غ����Դϴ�.");
	}
	return 0; 
}
