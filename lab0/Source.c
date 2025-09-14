#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
	puts("Моя программа"); // вывод строки
	return 5555;
}