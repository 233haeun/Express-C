#include <stdio.h>

int main(void) {
	float money = 0;
	float year;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf_s("%f", &money);
	year = 100000 / money;
	printf("10���� �����µ� �ɸ��� �ð��� %.2f", year);

	return 0;
}