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

		printf("�ϰ� ���� �ൿ�� �Է��� �ּ��� [1]���� ���� [-1]���� ���� : ");
		scanf_s("%d", &gameCount);

		if (gameCount == -1)
		{
			printf("������ �����մϴ�.\n\n");
			break;
		}
		else if (gameCount == 1)
		{
			printf("%d��° ������ �����մϴ�.\n\n", count);
			printf("%d * %d�� ����? ", random1, random2);
			scanf_s("%d", &ans);

			if (ans == random1 * random2)
			{
				printf("�����Դϴ�.\n\n");
				printf("���� ���������� �̵��մϴ�.\n\n");
				ansCount++;
				count++;
			}
			else
			{
				printf("������ �ƴմϴ�.\n\n");
				printf("������ �����մϴ�.\n\n");
				
				break;
			}
		}
	}

	gameEnd(ansCount, count);

	return 0;
}
