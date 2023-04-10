#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "function.h"

int main()
{
	int num1 = 0, num2 = 0, count = 1, gameCount = 0;
	int random1 = 0, random2 = 0, ans = 0, ansCount = 0;

	gameStart();

	while (count < 6)
	{
		srand(time(NULL));
		random1 = randNum(count);
		random2 = randNum(count);

		printf("하고 싶은 행동을 입력해 주세요 [1]게임 진행 [-1]게임 종료 : ");
		scanf_s("%d", &gameCount);

		if (gameCount == -1)
		{
			printf("게임을 종료합니다.\n\n");
			break;
		}
		else if (gameCount == 1)
		{
			printf("%d번째 게임을 시작합니다.\n\n", count);
			printf("%d * %d의 답은? ", random1, random2);
			scanf_s("%d", &ans);

			if (ans == random1 * random2)
			{
				printf("정답입니다.\n\n");
				printf("다음 스테이지로 이동합니다.\n\n");
				ansCount++;
				count++;
			}
			else
			{
				printf("정답이 아닙니다.\n\n");
				printf("게임을 종료합니다.\n\n");
				
				break;
			}
		}
	}

	gameEnd(ansCount, count);

	return 0;
}
