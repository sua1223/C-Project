// 1.1.2 - 실습문제 1) 이름과 전화번호를 저장할 2차원 배열을 전역으로 선언하고, 입력 받아 저장한다.
#include <stdio.h>
#define SIZE 30
#define MAX_SIZE 100

char name[MAX_SIZE][SIZE]; // 이름을 저장하는 배열
char phone[MAX_SIZE][SIZE]; // 전화번호를 저장하는 배열
int num = 0; // 사람과 전화번호를 num 변수로 연결

int main() {
	printf("이름: ");
	scanf("%s", name[num]);

	printf("전화번호: ");
	scanf("%s", phone[num]);
 }