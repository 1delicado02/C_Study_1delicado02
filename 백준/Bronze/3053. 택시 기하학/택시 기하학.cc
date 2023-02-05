#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void) {
	int R = 0;
	double u_area = 0, t_area = 0;

	scanf("%d", &R);
	u_area = M_PI * R * R;
	t_area = 2 * R * R;
	printf("%f\n%f", u_area, t_area);

	return 0;
}