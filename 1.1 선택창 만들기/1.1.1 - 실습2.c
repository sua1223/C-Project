/*1.1.1 – 실습문제 2) 실습문제 1과 같은 선택창을 출력한 후, 무한루프를 이용해 
6.종료를 입력 받을 때까지 계속해서 번호를 입력받아라. 각 번호에 따라 호출되는 
함수들은 다음과 같으며 main함수 위에 선언해둔다. 1. 입력: void input()   2. 수정 : void edit()  
3. 삭제 : void erase() 4. 검색 : void search()  5. 저장 : void save()*/
#include <stdio.h>

void input();
void edit();
void erase();
void search();
void save();

int main() {
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