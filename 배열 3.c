#include <stdio.h>

int main() {
	//int a[4][3]; //가로(층), 세로(호실) 
	
	int A[3][3] = { {3, 4, 0}, 
	                {1, 2, 0},
					{8, 1, 0} };
					
	int B[3][3] = { {2, 3, 2}, 
	                {7, 7, 8},
					{1, 5, 9} };
					
	int a, b;
	int C[3][3];
	
	for (a=0; a<3; a++) {
		for (b=0; b<3; b++) {
			C[a][b] = A[a][b] + B[a][b];
		}
	}
	
	for (a=0; a<3; a++) {
		for (b=0; b<3; b++) {
			printf("%d", C[a][b]);
		}
		printf("\n");
	}
}
