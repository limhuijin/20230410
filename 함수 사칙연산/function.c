#include <stdio.h>
#include "function.h"

void p(const char* msg, int n) //정의
{
	printf("======================\n");
	printf("%s 출력 : %d\n", msg, n);
	printf("======================\n");
}

int showMenu(int n)
{
	int input;
	printf("숫자 %d을(를) 입력해 주세요 : ", n);
	scanf_s("%d", &input);
	printf("숫자 %d을(를) 입력받았습니다.\n", input);
	return input;
}