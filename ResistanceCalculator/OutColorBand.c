/*
<���� ���ϱ�>
1. �������� ���װ��� �޴´�. �̶� ������ ���̴�.
2. ù��° ���� + �ι�° ���� + ����° ����� ������. (2 + 2 + 10^1 �̷�������.) (10^1 10^2 �̷��� �Ǻ��ϴ� ����� �׳� 0�� � �پ����� Ȯ���ϴ� ������� ����)
3. �ش� ���� �´� ������ �̸��� �ҷ��ͼ� ����Ѵ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

typedef struct _ColorBand {
	int first_band;
	int second_band;
	int third_band;
} clrbnd;


char colorbandlist[2][11][3] = {
	{"��","��","��","��","��","��","��","��","ȸ","��"},
	{"��","��","��","��","Ȳ","��","û","��","ȸ","��"}
};
/*
[2][11][3]����..

- [2]�� 2���� ���� ��Ÿ����. { }�ϳ��� �� ���̴�.
{"��","��","��","��","��","��","��","��","ȸ","��"},
{"��","��","��","��","Ȳ","��","û","��","ȸ","��"}

- [11]�� �ֵ���ǥ("")�� ������ ��Ÿ����.
"��","��","��","��","��","��","��","��","ȸ","��"
"��","��","��","��","Ȳ","��","û","��","ȸ","��"

- [3]�� �ֵ���ǥ ���� �ε��� ������ ��Ÿ����. (�ֵ���ǥ �� ���ڿ� ���� ����)
(char[3])"��", (char[3])"��", (char[3])"��", ...

�� �迭�� ���ڿ����� �����ϱ⿡ 3�������� ���������.
�Ϲ� ���ڰ� ����Ǵ� �Ͱ��� �ٸ��� �����ϱ� �ٶ���.
������ �ڷ�: https://m.blog.naver.com/PostView.nhn?blogId=james_parku&logNo=110168473749&proxyReferer=https:%2F%2Fwww.google.com%2F
*/

//�� �� ���ϱ�
void ColorBand() {
	clrbnd cb;
	char usr_rsstn[50]; //���� ���װ� ����
	char usr_rsstn_token[50]; //���� ���װ� �迭ĭ �и�

	printf("���װ��� �Է��ϼ���. ������ ���Դϴ�.\n= ");
	scanf("%s", usr_rsstn);
	for (int i = 0; usr_rsstn[i] != '\0'; i++) //0�� ������������ �ݺ�
		usr_rsstn_token[i] = usr_rsstn[i] - '0'; //usr_rsstn���� usr_rsstn_token�� ��ĭ�� ����

	cb.first_band = usr_rsstn_token[0]; //ù��° ���װ� ����
	cb.second_band = usr_rsstn_token[1]; //�ι�° ���װ� ����
	cb.third_band = 0; //���� ��� �� �ʱ�ȭ
	for (int i = 2; usr_rsstn_token[i] != -52; i++) //0�� ���������� �ݺ�
		if (usr_rsstn_token[i] == '\0')
			cb.third_band++; //����° ���װ� ���� (10�� �¼� ǥ��)

	printf("\n");
	printf("%c%c", colorbandlist[0][cb.first_band][0], colorbandlist[0][cb.first_band][1]); //�ѱ��� 2����Ʈ�̹Ƿ� [0]��[1]�� ��������ؾ��Ѵ�.
	printf("%c%c", colorbandlist[0][cb.second_band][0], colorbandlist[0][cb.second_band][1]);
	printf("%c%c", colorbandlist[0][cb.third_band][0], colorbandlist[0][cb.third_band][1]);

	printf("\nor\n");

	printf("%c%c", colorbandlist[1][cb.first_band][0], colorbandlist[1][cb.first_band][1]);
	printf("%c%c", colorbandlist[1][cb.second_band][0], colorbandlist[1][cb.second_band][1]);
	printf("%c%c", colorbandlist[1][cb.third_band][0], colorbandlist[1][cb.third_band][1]);

	printf("\n\n\n");
	system("pause");

	system("cls");

	return;
}