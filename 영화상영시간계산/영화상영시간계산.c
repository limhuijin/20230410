#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// �ʱ�ȭ
	int runningTime = 0;

	// �޴������ְ� �ð� �ޱ�, ���ѹݺ�, ����� -1
	while (1) {
		runningTime = showMenu();

		// �������� Ȯ��
		if (runningTime == -1)
		{
			break;
		}
		// ��ȯ�Ͽ� ���
		convertTime(runningTime);
	}

	showEnding();

	return 0;
}

void convertTime(int time) {
	
	int time1 = 0, time2 = 0;
	
	if (time / 60 > 0)
	{
		time1 = time / 60;
		time2 = time % 60;
	}
	else
	{
		time2 = time;
	}

	printf("��ȭ�� �󿵽ð��� %d �ð� %d ���Դϴ�.\n\n", time1, time2);
}

int showMenu(void) {
	int time;

	printf("-------------------------------------\n");
	printf("oo��ȭ���� ���� ���� ȯ���մϴ�.\n");
	printf("-------------------------------------\n");
	printf("��ȭ�� �� �ð��� ������ �Է��� �ּ��� [-1]���� : ");

	scanf_s("%d", &time);

	return time;
}

void showEnding(void) {
	printf("-------------------------------------\n");
	printf("�󿵽ð� ����� �����մϴ�. �����մϴ�.\n");
	printf("-------------------------------------\n");
}