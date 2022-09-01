#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch=getchar())!='#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            break;
        
        default:
            putchar(ch);
            break;
        }
    }
    getchar();
    getchar();

    return 0;
}