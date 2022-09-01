#include <stdio.h>
#define CHAR1 'e'
#define CHAR2 'i'
#define END '#'
int main(void)
{
    char ch_before, ch_after;
    int times=0;
    
    ch_before=getchar();
    while (ch_before!=END)
    {
        ch_after=getchar();
        if (ch_before==CHAR1 && ch_after==CHAR2)
            times++;
        ch_before=ch_after;
    }
    printf("%d", times);
    getchar();
    getchar();

    return 0;
}

