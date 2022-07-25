#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;
    
    while (ch!='\n')
    {
        ch=getchar();
        if (ch==SPACE)
            putchar(ch);
        else 
            putchar(ch+1);   
    }
    putchar(ch);
    getchar();

    return 0;
}