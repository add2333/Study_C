#include <stdio.h>
int main(void)
{
    int ch;
    int i=0;
    while ((ch=getchar())!=EOF)
    {         
        if (ch>=32)
            printf("%c %3d", ch ,ch);
        else if (ch=='\t')
            printf("\\t \\t");
        else if (ch=='\n')
        {
            printf("\\n \\n\n");
            i=1;
        }
        else 
            printf("%c ^%c", ch, ch+64);
        
        if (i++==10)
        {
            putchar('\n');
            i=1;
        }
    }
    printf("Done!");
    getchar();
    getchar();

    return 0;
}