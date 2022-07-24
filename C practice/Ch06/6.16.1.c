#include <stdio.h>
#define LETTER 26
int main(void)
{
    char letters[26];
    int i;
    
    for (i=0; i<LETTER; i++)
        letters[i]='a'+i;
    for (i=0; i<LETTER; i++)
        printf("%c\n", letters[i]);
    getchar();

    return 0;
}