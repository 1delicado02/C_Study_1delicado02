#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int N = 0;

	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		for (int l = 1; l <= (N - i); l++)
			printf(" ");
		for (int m = 1; m <= i; m++)
			printf("*");
		printf("\n");
	}

	return 0;
}