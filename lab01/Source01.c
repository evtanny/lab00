#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Нажмите Enter для продолжения...");
	getchar(); // ожидание нажатия Enter
	puts("Продолжение программы");
	return 0;
}