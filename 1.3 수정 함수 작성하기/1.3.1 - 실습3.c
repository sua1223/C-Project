/* 1.3.1 – 실습문제 3) 검색한 값이 없을 경우 존재하지 않는 이름이라는 문구를 출력하시오. 
이때 검색에 성공했을 경우 인덱스를 저장할 초기값을 설정하여 구분하면 쉽다.*/
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char edit_name[SIZE]; // 수정할 사람의 이름
	int edit_index = -1; // 수정할 사람이 저장된 인덱스

	printf("전화번호를 수정할 사람의 이름을 입력하세요: ");
	scanf("%s", edit_name);
	
	// 수정할 사람 검색
	for (int i = 0; i < num; i++) {
		if (strcmp(edit_name, name[i]) == 0) 
			edit_index = i; 
	}

	// 인덱스가 -1인 경우에는 수정할 사람이 존재하지 않는 것
	if (edit_index == -1) { 
		printf("존재하지 않는 이름입니다.\n");
		return;
	}
}
