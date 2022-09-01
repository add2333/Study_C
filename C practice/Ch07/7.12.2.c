#include <stdio.h>
int main(void)
{
    int num=1;
    char ch;

    while ((ch=getchar())!='#')
    {
        printf("%c %d", ch, ch);
        if (num%8==0)
            putchar('\n');
        num++;
    }
    getchar();
    getchar();

    return 0;
}