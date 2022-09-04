#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int u=0;
    int l=0;

    while ((ch=getchar()) != EOF)
    {
        if (isupper(ch))
            u++;
        
        if (islower(ch))
            l++;
    }
    printf("upper: %d, lower: %d", u, l);
    getchar();
    getchar();
    
    return 0;
}