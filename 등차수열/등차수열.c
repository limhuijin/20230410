#include <stdio.h>

int adding(int);
int facto(int);
int fibo(int);

int main()
{
	int num = 0;

	printf("알고 싶은 수열을 입력해 주세요 : ");
	scanf_s("%d", &num);

	printf("등차수열 %d번째 수 : %d\n", num, adding(num));
	printf("팩토리얼 %d번째 수 : %d\n", num, facto(num));
	printf("피보나치 수열 %d번째 수 : %d\n", num, fibo(num));

	return 0;
}

int adding(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (adding(n - 1) + 2);
	}
}

int facto(int n)
{
	if (n == 1 )
	{
		return 1;
	}
	else
	{
		return (facto(n - 1) * n);
	}
}

int fibo(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}