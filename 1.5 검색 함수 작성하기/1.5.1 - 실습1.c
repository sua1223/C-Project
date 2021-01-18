// 1.5.1 – 실습문제 1) 검색할 사람의 이름을 입력받으시오.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	char search_name[SIZE]; // 검색할 사람의 이름
	
	printf("전화번호를 검색할 사람의 이름을 입력하세요: ");
	scanf("%s", search_name);
}