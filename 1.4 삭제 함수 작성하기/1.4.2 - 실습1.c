/*1.4.2 – 실습문제 1)  strcpy를 이용하여 전화번호를 수정하시오. 
이 때 삭제할 번호의 인덱스를 한 줄씩 당겨주는 느낌으로 이해하면 쉽다.*/
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

	// 삭제할 사람 검색
	for (int i = 0; i < num; i++) {
		if (strcmp(erase_name, name[i]) == 0) 
			erase_index = i; 
	}

	// 인덱스가 -1인 경우에는 삭제할 사람이 존재하지 않는 것
	if (erase_index == -1) { 
		printf("존재하지 않는 이름입니다.\n");
	}

	for (int i = erase_index; i < num - 1; i++) {
		strcpy(name[i], name[i + 1]);
		strcpy(phone[i], phone[i + 1]);
	}
}