#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void) {
	int input[10] = { 0, };
	int remainder[10] = { 0, };
	int count = 1;

	for (int i = 0; i < 10; i++)
		scanf("%d", &input[i]);

	for (int i = 0; i < 10; i++)
		remainder[i] = input[i] % 42;

	qsort(remainder, sizeof(input) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < 9; i++) {
		if (remainder[i] != remainder[i + 1])
			count++;
	}

	printf("%d", count);

	return 0;
}