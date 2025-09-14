#include <locale.h>
#include <stdio.h>
void name()
{
	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
	puts("                        **************************************************************");
	puts("                        *                                                            *");
	puts("                        *            тема: Разработка консольного приложения         *");
	puts("                        * выполнила Евтеева А. А.                                    *");
	puts("                        * группа: бИД-251                                            *");
	puts("                        **************************************************************");
	return 0;
}
void date()
{
	puts("  _   _   _     _   _  ");
	puts("  _| |_  | | | | | |_  ");
	puts(" |_  |_| |_| | |_|  _| ");
	getchar();
}
int main()
{
	setlocale(LC_ALL, "RUS");
	getchar();
	name();
	getchar();
	date();
	return 0;
}