// 1.3.2 – 실습문제 1) strcpy를 이용하여 전화번호를 수정하시오.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char edit_name[SIZE]; // 수정할 사람의 이름
	char edit_phone[SIZE]; // 수정할 사람의 전화번호
	int edit_index = -1; // 수정할 사람이 저장된 인덱스

	printf("전화번호를 수정할 사람의 이름을 입력하세요: ");
	scanf("%s", edit_name);

	// 수정할 사람 검색
	for (int i = 0; i < num; i++) {
		if (strcmp(edit_name, name[i]) == 0) 
			edit_index = i; // 해당 인덱스 저장
	}

	printf("수정할 전화번호를 입력하세요: ");
	scanf("%s", edit_phone);

	// 해당 인덱스의 번호를 새로 받은 전화번호로 수정
	for (int i = 0; i < SIZE; i++) {
		strcpy(phone[edit_index], edit_phone); 
	}
}
