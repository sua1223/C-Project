// 1.3 – 예제문제 1) 문자열 두 개를 strcmp로 비교하여 같을 경우 같다고, 다를 경우 다르다고 출력하시오.
#include <stdio.h>
#include <string.h>

int main() {
	char s1[10] = "Hello";
	char s2[10] = "hi";

	if (strcmp(s1, s2)==0)
		printf("두 문자열이 같습니다.\n");
	else
		printf("두 문자열이 다릅니다.\n");
}