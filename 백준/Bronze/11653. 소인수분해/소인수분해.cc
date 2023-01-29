#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int N = 0;
	int prime_num = 2;

	scanf("%d", &N);

	while (N != 1) {
		if (N % prime_num == 0) {
			N /= prime_num;
			printf("%d\n", prime_num);
			if (N == 1)
				break;
			prime_num = 2;
			continue;
		}
		else
			prime_num++;
	}

	return 0;
}