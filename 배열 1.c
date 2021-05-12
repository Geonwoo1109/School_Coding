#include <stdio.h>

int main() {

	int a[3] = {1, 2, 3};
	//printf("%d", a[3]);
	
	int i;
	int Score[3] = {80, 70, 90};
	
	/*
	Score[0] = 80;
	Score[1] = 70;
	Score[2] = 90;
	*/
	
	for (i=0; i<3; i++) {
		printf("%d¹øÂ° ³ó±¸ÆÀÀÇ µæÁ¡Àº %dÀÔ´Ï´Ù.\n", i+1, Score[i]);
	}
}
