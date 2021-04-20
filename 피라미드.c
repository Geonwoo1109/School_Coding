#include <stdio.h>

int main() {
	int a, b, c;
 	
 	int Count = 1;
 	int Num;
 	//scanf("%d", &Num);

 	for( a=1; a<=20; a = a + 2 ) {
 		
 		for (b=1; b<=(20-a)/2; b++) {
 				//printf("%d", c);
 			printf(" ");
		}
		
 		for( b=1; b<=a ; b = b + 1 ) {
 			//printf("%d", b);
 			//printf(" ");
 			printf("*");
 			
 		}
 		printf("\n");
 	}
 	return 0;
}
