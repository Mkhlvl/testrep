#include <stdio.h>

int main (void)
{
	int a, b, deist;
	printf("Введите первое число: ");
	scanf("%d", &a);
	printf("Введите номер действия, которое с ним нужно сделать: 1 - сложить, 2 - вычесть, 3 - умножить, 4 - разделить: ");
	scanf("%d", &deist);
	printf("Введите второе число: ");
	scanf("%d", &b);
	if (deist == 1)
		printf("Получилось %d!\n", (a+b));
	if (deist == 2)
		printf("Получилось %d!\n", (a-b));
	if (deist == 3)
		printf("Получилось %d!\n", (a*b));
	if (deist == 4)
		printf("Получилось %d!\n", (a/b));
}


