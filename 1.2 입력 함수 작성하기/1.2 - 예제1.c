/* 1.2 - 예제문제 1) #define을 이용하여 MAX 값을 10으로 매크로 지정해주어 
“Hellow World”를 MAX 만큼 출력하시오.*/
#include <stdio.h>

#define MAX 10
int main() {
	for (int i = 0; i < MAX; i++) {
		printf("Hello World\n");
	}
}