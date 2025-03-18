#include <stdio.h>

int main(void)
{
    int c;
    int vazios = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (vazios == 0)
            {
                putchar(c);
                vazios = 1;
            }
        }
        else
        {
            putchar(c);
            vazios = 0;
        }
    }

    return 0;
}
