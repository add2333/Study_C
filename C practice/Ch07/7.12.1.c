#include <stdio.h>
int main(void)
{
    int space=0;
    int line=0;
    int other=0;
    char ch;

    printf("Please enter some words(press # to end): ");
    while ((ch=getchar())!='#')
    {
        if (ch==' ')
            space++;
        else if (ch=='\n')
            line++;
        else 
            other++;
    } 
    printf("%d %d %d", space, line, other);
    getchar();
    getchar();
    getchar();

    return 0;
}