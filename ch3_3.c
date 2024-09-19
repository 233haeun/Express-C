#include <stdio.h>

int main(void) {
	float height = 0;
	float base = 0;
	float area;

	printf("intput base: ");
	scanf_s("%f", &base);
	printf("input height: ");
	scanf_s("%f", &height);

	area = base * height / 2;

	printf("triangle area : %f", area);

	return 0;
}