#include <stdio.h>
#include "function.h"

int main()
{
	int num1 = 0, num2 = 0;

	num1 = showMenu(1);
	num2 = showMenu(2);

	p("����", num1 + num2);
	p("����", num1 - num2);
	p("����", num1 * num2);
	p("������", num1 / num2);

	return 0;
}
