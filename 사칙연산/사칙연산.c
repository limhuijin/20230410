#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;

	printf("���� 1�� �Է��� �ּ��� : ");
	scanf_s("%d", &num1);
	printf("���� 2�� �Է��� �ּ��� : ");
	scanf_s("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}