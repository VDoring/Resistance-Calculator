/*
[기능]

1. 유저가 저항값(단위는 Ω)를 입력 -> 프로그램이 색 띠를 출력
2. 유저가 색 띠를 입력 -> 프로그램이 저항숫자를 출력

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int menu;

	while (1) {
		printf("< 저항 계산기 >\n\n");
		printf("1. 색 띠 구하기\n2. Ω(저항값) 구하기\n= ");
		scanf("%d", &menu);

		if (menu == 1) {
			ColorBand();
		}
		else if (menu == 2) {
			Resistance();
		}
		else
			printf("다시 입력하세요!");
	}

	return 0;
}