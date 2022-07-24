#include <stdio.h>
#include <string.h>
int main(void)
{
    char vocabulary[20];
    int i, len;

    printf("Please enter a word: ");
    scanf("%s", vocabulary);
    len=strlen(vocabulary);
    for (i=len; i>=0; i--)
        printf("%c", vocabulary[i]);
    getchar();
    getchar();

    return 0;
}