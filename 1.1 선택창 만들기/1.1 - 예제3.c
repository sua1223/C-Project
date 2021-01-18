// 1.1 - 예제문제 3) 1이 나올 때까지 숫자를 계속 입력 받는 무한루프를 while문을 이용하여 만드시오.
#include <stdio.h>

int main() {
	int n;

	while (1) {
		printf("숫자를 입력하세요: ");
		scanf("%d", &n);

		if (n == 1) {
			printf("1을 눌러 프로그램을 종료합니다.\n");
			break;
		}
	}
}