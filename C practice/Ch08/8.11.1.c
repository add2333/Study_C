#include <stdio.h>
int main(void)
{
    int length;
    char ch;

    while ((ch=getchar())!=EOF)
    {
        if (ch!='\n' && (int)ch!=32)
            length++;
    }

    printf("%d", length);
    getchar();
    getchar();

    return 0;
}