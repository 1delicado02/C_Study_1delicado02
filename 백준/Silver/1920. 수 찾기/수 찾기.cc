#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000

#include <stdio.h>
#include <stdlib.h>

int A[MAX] = { 0, };
int B[MAX] = { 0, };

int static compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else 0;
}

int main(void) {
	int N = 0, M = 0;
	int first = 0, middle = 0, last = 0;
	int exist = 0;
	int target = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);

	qsort(A, N, sizeof(int), compare);

	scanf("%d", &M);
	for (int i = 0; i < M; i++)
		scanf("%d", &B[i]);

	for (int i = 0; i < M; i++) {
		target = B[i];
		exist = 0;
		first = 0;
		last = N - 1;
		while (first <= last) {
			middle = (first + last) / 2;
			if (A[middle] == target) {
				exist = 1;
				break;
			}
			else if (A[middle] < target)
				first = middle + 1;
			else
				last = middle - 1;
		}
		printf("%d\n", exist);
	}

	return 0;
}