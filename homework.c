#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int n;
	printf("Введите N: ");
	scanf("%d", &n);
	double p = 1.0;
	for (int i = 1; i <= n; i++)
	{
		p *= (1.0 + i * 0.1);
	}
	printf("Результат: %.4lf\n", p);
	return 0;
}
