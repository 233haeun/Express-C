#include <stdio.h>

int main(void) {
	float mile = 0;
	double meter;

	printf("마일을 입력하시오: ");
	scanf_s("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1f 마일은 %.2lf 미터입니다.", mile, meter);
	
	return 0;
}