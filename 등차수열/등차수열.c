#include <stdio.h>

int adding(int);
int facto(int);
int fibo(int);

int main()
{
	int num = 0;

	printf("�˰� ���� ������ �Է��� �ּ��� : ");
	scanf_s("%d", &num);

	printf("�������� %d��° �� : %d\n", num, adding(num));
	printf("���丮�� %d��° �� : %d\n", num, facto(num));
	printf("�Ǻ���ġ ���� %d��° �� : %d\n", num, fibo(num));

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