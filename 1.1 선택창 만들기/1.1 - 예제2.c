// 1.1 - 예제 문제2) 숫자를 입력받고 입력받은 숫자를 if문으로 판별하시오
#include <stdio.h>

int main() {
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);

	if (n == 1)
		printf("입력받은 숫자는 1입니다.\n");
	else
		printf("입력받은 숫자는 1이 아닙니다.\n");
}