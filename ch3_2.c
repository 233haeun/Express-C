#include <stdio.h>

int main(void) {
	float mile = 0;
	double meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1f ������ %.2lf �����Դϴ�.", mile, meter);
	
	return 0;
}