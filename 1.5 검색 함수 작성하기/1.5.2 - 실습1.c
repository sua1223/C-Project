/* 1.5.2 – 실습문제 1) 검색한 값이 없을 경우 존재하지 않는 이름이라는 
문구를 출력하시오. 이때 검색에 성공했을 경우 인덱스를 저장할 초기값을 설정하여 
구분하면 쉽다. 검색에 성공했을 경우 검색한 전화번호를 출력하시오.*/
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char search_name[SIZE]; // 검색할 사람의 이름
	int search_index = -1; // 검색할 사람이 저장된 인덱스

	printf("전화번호를 검색할 사람의 이름을 입력하세요: ");
	scanf("%s", search_name);

	for (int i = 0; i < num; i++) {
		if (strcmp(search_name, name[i]) == 0) // 검색
			search_index = i; // 해당 인덱스 저장
	}

	if (search_index == -1) { // 인덱스가 -1인 경우에는 검색한 사람이 존재하지 않는 것
		printf("존재하지 않는 이름입니다.\n");
		return;
	}
	else
		printf("전화번호: %s\n", phone[search_index]);

}