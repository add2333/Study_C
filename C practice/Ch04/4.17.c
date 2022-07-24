#include <stdio.h>
int main(void)
{
    int m;

    printf("Please enter three integers.\n");
    scanf("%*d %*d %d", &m);
    printf("The last one is %d", m);
    getchar();
    getchar();

    return 0;
}