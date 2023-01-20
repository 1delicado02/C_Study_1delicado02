#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int N = 0, M = 0;
	int card[100] = { 0, };
	int sum = 0, answer=0;

	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);

	for (int a = 0; a < N; a++) {
		for (int b = a + 1; b < N; b++) {
			for (int c = b + 1; c < N; c++) {
				sum = card[a] + card[b] + card[c];
				if (sum > answer && sum <= M)
					answer = sum;
			}
		}
	}

	printf("%d", answer);

	return 0;
}