// 1.4.1 – 실습문제 1) 삭제할 사람의 이름을 입력받으시오.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char erase_name[SIZE]; // 삭제할 사람의 이름
	int erase_index = -1; // 삭제할 사람이 저장된 인덱스

	printf("전화번호를 삭제할 사람의 이름을 입력하세요: ");
	scanf("%s", erase_name);
}