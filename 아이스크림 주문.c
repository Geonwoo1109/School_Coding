#include <stdio.h>

int main() {
	int Answer, Icecream;
	
	printf("아이스크림을 주문하시려면 9번을 눌러주세요: ");
	scanf("%d", &Answer);
	printf("\n");
	
	if (Answer == 9) {
		printf("1. 초콜릿\n2. 바닐라\n3. 섞은거");
		printf("번호를 선택해주세요: ");
		scanf("%d", &Icecream);
		printf("\n");
		
		if (Icecream == 1) {
			printf("초콜릿 아이스크림을 준비하겠습니다.");
		} else if (Icecream == 2) {
			printf("바닐라 아이스크림을 준비하겠습니다."); 
		} else if (Icecream == 3) {
			printf("혼합 아이스크림을 준비하겠습니다.");
		} else {
			printf("메뉴에 없는 아이스크림입니다.");
		}
		
	} else {
		printf("메뉴 준비중입니다.");
	}
	return 0; 
}
