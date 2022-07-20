#include <stdio.h>
int main(void)
{
    int ASCii_value=0;

    printf("Please enter the value of ascii:");
    scanf("%d", &ASCii_value);
    printf("the character corresponding the value of ascii is:%c", ASCii_value);\
    getchar();

    return 0;
}