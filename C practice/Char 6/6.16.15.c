#include <stdio.h>
#define LEN 255
int main(void)
{
    int i=0;
    int lens;
    char str[LEN];
    printf("Please enter the line to be reverse.");
    for ( ; str[i-1] != '\n'; i++)
        scanf("%c", &str[i]);
    for ( ; 0<=i; i--)
        printf("%c", str[i]);
    getchar();
    getchar();

    return 0;     
}