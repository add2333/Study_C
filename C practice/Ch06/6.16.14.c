#include <stdio.h>
#define NUM 7
int main(void)
{
    double a[8], b[8];
    int i, j, k;

    printf("Please enter 8 numbers: ");
    for (i=0; i<=NUM; i++)
        scanf("%lf", &a[i]);
    b[0]=a[0 ];
    for (i=1; i<=NUM; i++)
        b[i]+=b[i-1]+a[i];
    for (i=0; i<=NUM; i++)
        printf("%8.2lf", a[i]);
    printf("\n");
    for (i=0; i<=NUM; i++)
        printf("%8.2lf", b[i]);
    getchar();
    getchar();

    return 0;
}