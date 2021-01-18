/* 1.2 - 예제문제 3) 0부터 9까지 출력하는 사용자 함수를 정의하여 작성하시오. 
함수명은 print_num() 이며, main 함수 밖에서 정의하고 main 함수에서 해당 함수를 호출하시오.*/
#include <stdio.h>

int num[10];
void print_num() {
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

int main() {
	for (int i = 0; i < 10; i++) {
		num[i] = i;
	}
	print_num();
}