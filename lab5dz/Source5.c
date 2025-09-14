#include <locale.h>
#include <stdio.h>
int main()

{
	setlocale(LC_CTYPE, "RUS");
    puts("                    |    |    | ");
    puts("                    )_)  )_)  )_) ");
    puts("                  )___))___))___)\ ");
    puts("                  )____)____)_____)\\ ");
    puts("                _____|____|____|____\\\__ ");
    puts("       ---------\                   /--------- ");
    puts("         ^^^^^ ^^^^^^^^^^^^^^^^^^^^^ ");
    puts("          ^^^^  ^^^^^^^^^^^^^^^^^ ");
	return 0;
}