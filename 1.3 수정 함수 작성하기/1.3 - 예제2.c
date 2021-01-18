// 1.3 - 예제문제 2) strcpy를 사용하여 1번 문자열을 2번 문자열로 복사한 후, 2번 문자열을 출력하시오.
#include <stdio.h>
#include <string.h>

int main() {
	char s1[10] = "Hello";
	char s2[10];

	strcpy(s2, s1);
	printf("%s\n", s2);
}