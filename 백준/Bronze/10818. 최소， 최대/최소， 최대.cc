#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000

#include <stdio.h>

int arr[MAX] = { 0, };

int main(void) {
	int N;
	int min, max;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	min = arr[0];
	max = arr[0];
	for (int i = 1; i < N; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	printf("%d %d", min, max);

	return 0;
}