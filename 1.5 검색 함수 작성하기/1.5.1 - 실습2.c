/* 1.5.1 – 실습문제 2)  name 배열에서 검색할 사람을 찾고, 
찾은 사람의 인덱스를 다른 변수에 저장하시오.*/
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

	//검색
	for (int i = 0; i < num; i++) {
		if (strcmp(search_name, name[i]) == 0) 
			search_index = i;
	}

}