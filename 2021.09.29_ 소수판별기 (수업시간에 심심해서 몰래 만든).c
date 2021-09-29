#include <stdio.h>

main() {
	
	//printf("%c  %d", 'A', 'A');
	
	int n, Bn=2;
	
	scanf("%d", &n);
	
	int i, j;
	for (i=2; i<=n; i++) {
		for (j=2; j<=i; j++) {
			if (i%j == 0) break;
			else continue;
		}
		printf("%c %d\n", (i == j) ? 'o' : 'x', i);
		Bn = (i == j) ? i : Bn;
		
	}
	
	printf("\n%d까지의 자연수 중 가장 큰 소수: %d", n, Bn);
}
