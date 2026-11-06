#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");

	for (int i = 1; i <= 10; i++)
	{
		putchar('*');
	}
	putchar('\n');

	int count;
	char ch, ch2;
	printf("Введите количество и символ: ");
	scanf("%d %c", &count, &ch);

	putchar('+');
	for (int i = 0; i < count; i++)
	{
		putchar(ch);
	}
	putchar('+');
	putchar('\n');

	printf("Введите второй символ: ");
	scanf(" %c", &ch2);
	for (int i = 0; i < count / 2; i++)
	{
		putchar(ch);
	}
	for (int i = count / 2; i < count; i++)
	{
		putchar(ch2);
	}
	putchar('\n');

	for (int i = 0; i < count; i++)
	{
		putchar(ch);
		putchar('!');
	}
	putchar('\n');

	int m, n;
	printf("Введите m и n: ");
	scanf("%d %d", &m, &n);
	int s = 0;
	for (int i = m; i <= n; i++)
	{
		s += i;
	}
	printf("Сумма: %d\n", s);

	int pwr;
	printf("Введите степень n для двойки: ");
	scanf("%d", &pwr);
	int val = 1;
	for (int i = 0; i <= pwr; i++)
	{
		printf("2^%2d = %8d\n", i, val);
		if (i < pwr)
		{
			val *= 2;
		}
	}
	printf("Результат: %dK\n", val / 1024);

	int num_m;
	printf("Введите целое число m: ");
	scanf("%d", &num_m);
	printf("%.1fK\n", (double)num_m / 1024.0);

	double h;
	printf("Введите шаг табуляции h: ");
	scanf("%lf", &h);
	printf("-------------\n");
	printf("|   x  |   y  |\n");
	printf("-------------\n");
	for (double x = 0.0; x <= 2.0001; x += h)
	{
		double y = x * x + sin(5.0 * x);
		printf("| %4.2lf | %7.4lf |\n", x, y);
	}
	printf("-------------\n");

	return 0;
}
