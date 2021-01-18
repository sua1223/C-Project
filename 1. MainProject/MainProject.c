#include <stdio.h>
#include <string.h>
#define SIZE 30
#define MAX_SIZE 100

char name[MAX_SIZE][SIZE]; // 이름을 저장하는 배열
char phone[MAX_SIZE][SIZE]; // 전화번호를 저장하는 배열
int num = 0; // 사람과 전화번호를 num 변수로 연결

void input();
void edit();
void erase();
void search();
void save();

int main() {

	printf("*************전화번호부*************\n\n");
	printf("    1.입력    2.수정    3.삭제\n");
	printf("    4.검색    5.저장    6.종료\n");
	printf("************************************\n");

	int menu = 0;

	while (1) {
		printf("\n사용자 입력>> ");
		scanf("%d", &menu);

		if (menu == 6)
			break;
		else if (menu == 1)
			input();
		else if (menu == 2)
			edit();
		else if (menu == 3)
			erase();
		else if (menu == 4)
			search();
		else if (menu == 5)
			save();
		else
			printf("잘못된 입력입니다. 다시 입력하세요,\n");
	}
}

// 전화번호를 새로 입력하는 함수
void input() { 

	if (num >= MAX_SIZE) {
		printf("저장공간이 부족합니다.\n");
		return;
	}

	printf("이름: ");
	scanf("%s", name[num]);

	printf("전화번호: ");
	scanf("%s", phone[num]);

	num++;
}

// 입력된 전화번호를 수정하는 함수
void edit() { 

	char edit_name[SIZE]; // 수정할 사람의 이름
	char edit_phone[SIZE]; // 수정할 사람의 전화번호
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

	printf("수정할 전화번호를 입력하세요: ");
	scanf("%s", edit_phone);

	// 해당 인덱스의 번호를 새로 받은 전화번호로 수정
	for (int i = 0; i < SIZE; i++) {
		strcpy(phone[edit_index], edit_phone); 
	}

}

//입력된 전화번호를 삭제하는 함수
void erase() { 

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
		return;
	}
	else
		num--;

	// 저장된 값들을 한 인덱스씩 당겨서 삭제
	for (int i = erase_index; i < num - 1; i++) {
		strcpy(name[i], name[i + 1]);
		strcpy(phone[i], phone[i + 1]);
	}
}

//입력된 전화번호를 검색하는 함수
void search() { 

	char search_name[SIZE]; // 검색할 사람의 이름
	int search_index = -1; // 검색할 사람이 저장된 인덱스

	printf("전화번호를 검색할 사람의 이름을 입력하세요: ");
	scanf("%s", search_name);

	// 검색
	for (int i = 0; i < num; i++) {
		if (strcmp(search_name, name[i]) == 0) 
			search_index = i; 
	}

	// 인덱스가 -1인 경우에는 검색한 사람이 존재하지 않는 것
	if (search_index == -1) { 
		printf("존재하지 않는 이름입니다.\n");
		return;
	}
	else
		printf("전화번호: %s\n", phone[search_index]);

}

//입력된 전화번호를 파일로 저장하는 함수
void save() { 

	FILE *fp = fopen("call.txt", "w"); 

	// 파일에 문자열 저장
	for (int i = 0; i < num; i++) {
		fputs(name[i], fp);   
		fputs("\t", fp);
		fputs(phone[i], fp);
		fputs("\n", fp);
	}

	fclose(fp); 

	printf("저장되었습니다.\n");
}