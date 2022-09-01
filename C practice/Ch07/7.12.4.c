#include <stdio.h>
int main(void)
{
    char ch;
    
    while ((ch=getchar())!='#')
    {
        if (ch=='.')
            putchar('!');
        else
            putchar(ch);
    }
    getchar();
    getchar();
    getchar();
    return 0;
}