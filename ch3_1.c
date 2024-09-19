#include <stdio.h>

int main(void) {
	float money = 0;
	float year;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf_s("%f", &money);
	year = 100000 / money;
	printf("10억을 모으는데 걸리는 시간은 %.2f", year);

	return 0;
}