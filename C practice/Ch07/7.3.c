#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    while ((ch=getchar())!='\n')
    {
        if (isalpha(ch))
            putchar(ch+1);
        else
            putchar(ch);
    }
    putchar(ch);

    getchar();
    getchar();

    return 0;
}