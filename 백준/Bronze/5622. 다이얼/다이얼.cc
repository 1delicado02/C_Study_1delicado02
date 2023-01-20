#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	char input[16] = { 0, };
	int time = 0;

	scanf("%s", input);
	
	for (int i = 0; i < strlen(input); i++) {
		time++;
		if (input[i] >= 65 && input[i] <= 67)
			time += 2;
		else if (input[i] >= 68 && input[i] <= 70)
			time += 3;
		else if (input[i] >= 71 && input[i] <= 73)
			time += 4;
		else if (input[i] >= 74 && input[i] <= 76)
			time += 5;
		else if (input[i] >= 77 && input[i] <= 79)
			time += 6;
		else if (input[i] >= 80 && input[i] <= 83)
			time += 7;
		else if (input[i] >= 84 && input[i] <= 86)
			time += 8;
		else if (input[i] >= 87 && input[i] <= 90)
			time += 9;
		else
			time--;
	}

	printf("%d", time);

	return 0;
}