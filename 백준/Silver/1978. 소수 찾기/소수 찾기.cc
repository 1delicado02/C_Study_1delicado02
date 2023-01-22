#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

#include <stdio.h>

int main(void) {

	int N = 0;
	int num[MAX] = { 0, };
	int count = 0;
	int answer = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < N; i++) {
		count = 0;
		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0)
				count++;
		}
		if (count == 2)
			answer++;
	}

	printf("%d", answer);

	return 0;
}