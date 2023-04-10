#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// 초기화
	int runningTime = 0;

	// 메뉴보여주고 시간 받기, 무한반복, 종료시 -1
	while (1) {
		runningTime = showMenu();

		// 종료조건 확인
		if (runningTime == -1)
		{
			break;
		}
		// 변환하여 출력
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

	printf("영화의 상영시간은 %d 시간 %d 분입니다.\n\n", time1, time2);
}

int showMenu(void) {
	int time;

	printf("-------------------------------------\n");
	printf("oo영화관에 오신 것을 환영합니다.\n");
	printf("-------------------------------------\n");
	printf("영화의 상영 시간을 분으로 입력해 주세요 [-1]종료 : ");

	scanf_s("%d", &time);

	return time;
}

void showEnding(void) {
	printf("-------------------------------------\n");
	printf("상영시간 출력을 종료합니다. 감사합니다.\n");
	printf("-------------------------------------\n");
}