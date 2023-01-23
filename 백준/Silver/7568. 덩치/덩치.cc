#define _CRT_SECURE_NO_WARNINGS
#define MAX 50
#include <stdio.h>

int main(void) {
	
	int N = 0;
	int size[MAX][2] = { (0,0), };
	int lose[MAX] = { 0, };

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &size[i][0], &size[i][1]);

	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (size[i][0] > size[j][0] && size[i][1] > size[j][1])
				lose[j]++;
			else if (size[i][0] < size[j][0] && size[i][1] < size[j][1])
				lose[i]++;
			else
				;
		}
	}
	
	for (int i = 0; i < N; i++)
		printf("%d ", lose[i]+1);

	return 0;
}