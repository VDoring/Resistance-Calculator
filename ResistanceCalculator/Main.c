/*
[���]

1. ������ ���װ�(������ ��)�� �Է� -> ���α׷��� �� �츦 ���
2. ������ �� �츦 �Է� -> ���α׷��� ���׼��ڸ� ���

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int menu;

	while (1) {
		printf("< ���� ���� >\n\n");
		printf("1. �� �� ���ϱ�\n2. ��(���װ�) ���ϱ�\n= ");
		scanf("%d", &menu);

		if (menu == 1) {
			ColorBand();
		}
		else if (menu == 2) {
			Resistance();
		}
		else
			printf("�ٽ� �Է��ϼ���!");
	}

	return 0;
}