// 1.2 - 예제문제 2) char형 배열을 이용하여 문자열을 입력받아 출력하시오. 
#include <stdio.h>

int main() {
	char c[30];
	printf("문자열을 입력하세요: ");
	scanf("%s", c);
	printf("%s\n", c);
}