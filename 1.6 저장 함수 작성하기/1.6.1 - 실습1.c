// 1.6.1 – 실습문제 1) name 배열과 phone 배열에 있는 이름과 전화번호들을 텍스트 파일로 저장하시오.
#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100
char name[MAX_SIZE][SIZE];
char phone[MAX_SIZE][SIZE];
int num = 0;

int main() {
	FILE *fp = fopen("call.txt", "w");    // call.txt 파일을 쓰기 모드(w)로 열기.

	// 파일에 문자열 저장
	for (int i = 0; i < num; i++) {
		fputs(name[i], fp);   
		fputs("\t", fp);
		fputs(phone[i], fp);
		fputs("\n", fp);
	}

	fclose(fp); // 파일 포인터 닫기
}