/* 1.3.1 – 실습문제 2) name 배열에서 수정할 사람을 검색하고, 
찾은 사람의 인덱스를 다른 변수에 저장하시오.*/
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char edit_name[SIZE]; // 수정할 사람의 이름
	int edit_index; // 수정할 사람이 저장된 인덱스

	printf("전화번호를 수정할 사람의 이름을 입력하세요: ");
	scanf("%s", edit_name);
	
	// 수정할 사람 검색
	for (int i = 0; i < num; i++) {
		if (strcmp(edit_name, name[i]) == 0) 
			edit_index = i; 
	}
}
