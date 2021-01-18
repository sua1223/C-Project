// 1.3.1 - 실습문제 1) 수정할 사람의 이름을 입력받으시오.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE]; 
char phone[MAX_SIZE][SIZE]; 
int num = 0;

int main() {
	char edit_name[SIZE]; // 수정할 사람의 이름

	printf("전화번호를 수정할 사람의 이름을 입력하세요: ");
	scanf("%s", edit_name);
}
