#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("������� Enter ��� �����������...");
	getchar(); // �������� ������� Enter
	puts("����������� ���������");
	return 0;
}