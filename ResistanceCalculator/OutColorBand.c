/*
<색띠 구하기>
1. 유저에게 저항값을 받는다. 이때 단위는 Ω이다.
2. 첫번째 색띠 + 두번째 색띠 + 세번째 색띠로 나눈다. (2 + 2 + 10^1 이런식으로.) (10^1 10^2 이런걸 판별하는 방법은 그냥 0이 몇개 붙었는지 확안하는 방법으로 진행)
3. 해당 값에 맞는 색띠의 이름을 불러와서 출력한다.

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
	{"검","갈","빨","주","노","초","파","보","회","흰"},
	{"흑","갈","적","등","황","녹","청","자","회","백"}
};
/*
[2][11][3]에서..

- [2]는 2개의 층을 나타낸다. { }하나가 한 층이다.
{"검","갈","빨","주","노","초","파","보","회","흰"},
{"흑","갈","적","등","황","녹","청","자","회","백"}

- [11]은 쌍따옴표("")의 갯수를 나타낸다.
"검","갈","빨","주","노","초","파","보","회","흰"
"흑","갈","적","등","황","녹","청","자","회","백"

- [3]은 쌍따옴표 안의 인덱스 갯수를 나타낸다. (쌍따옴표 내 문자열 길이 지정)
(char[3])"검", (char[3])"갈", (char[3])"빨", ...

이 배열은 문자열까지 포함하기에 3차원으로 만들어졌다.
일반 숫자가 저장되는 것과는 다르니 유의하길 바란다.
참고한 자료: https://m.blog.naver.com/PostView.nhn?blogId=james_parku&logNo=110168473749&proxyReferer=https:%2F%2Fwww.google.com%2F
*/

//색 띠 구하기
void ColorBand() {
	clrbnd cb;
	char usr_rsstn[50]; //유저 저항값 저장
	char usr_rsstn_token[50]; //유저 저항값 배열칸 분리

	printf("저항값을 입력하세요. 단위는 Ω입니다.\n= ");
	scanf("%s", usr_rsstn);
	for (int i = 0; usr_rsstn[i] != '\0'; i++) //0이 읽히기전까지 반복
		usr_rsstn_token[i] = usr_rsstn[i] - '0'; //usr_rsstn값을 usr_rsstn_token에 한칸식 저장

	cb.first_band = usr_rsstn_token[0]; //첫번째 저항값 저장
	cb.second_band = usr_rsstn_token[1]; //두번째 저항값 저장
	cb.third_band = 0; //변수 사용 전 초기화
	for (int i = 2; usr_rsstn_token[i] != -52; i++) //0이 끝날때까지 반복
		if (usr_rsstn_token[i] == '\0')
			cb.third_band++; //세번째 저항값 저장 (10의 승수 표현)

	printf("\n");
	printf("%c%c", colorbandlist[0][cb.first_band][0], colorbandlist[0][cb.first_band][1]); //한글은 2바이트이므로 [0]과[1]을 동시출력해야한다.
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