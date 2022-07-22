#include <stdio.h>
int main(void)
{
    char ch;
    
    for (ch='a'; ch<='z'; ch++)
        printf("the ascii code for %c is %d.\n", ch, ch);
    getchar();

    return 0;
}