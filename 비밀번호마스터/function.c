#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "function.h"

void gameStart()
{
	printf("��й�ȣ ���ӿ� ���� ���� ȯ���մϴ�.\n\n");
	printf("�� 5�� ������ ���߽ø� ������ �¸��ϰ� �˴ϴ�.\n");
	printf("������ ��� ������ ����˴ϴ�.\n\n");
}

int randNum(int count)
{
	int ranNum = 0;

	ranNum = rand() % (10 * count) + 1;

	return ranNum;
}

void gameEnd(int ansCount, int count)
{
	printf("�� %d�� �����̽��ϴ�.\n\n", ansCount);

	if (count > 5)
	{
		printf("�����մϴ�. ��� �ܰ踦 ����ϼ̽��ϴ�.\n");
	}
}