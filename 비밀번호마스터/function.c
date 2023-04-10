#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "function.h"

void gameStart()
{
	printf("비밀번호 게임에 오신 것을 환영합니다.\n\n");
	printf("총 5번 정답을 맞추시면 게임을 승리하게 됩니다.\n");
	printf("오답일 경우 게임이 종료됩니다.\n\n");
}

int randNum(int count)
{
	int ranNum = 0;

	ranNum = rand() % (10 * count) + 1;

	return ranNum;
}

void gameEnd(int ansCount, int count)
{
	printf("총 %d개 맞히셨습니다.\n\n", ansCount);

	if (count > 5)
	{
		printf("축하합니다. 모든 단계를 통과하셨습니다.\n");
	}
}