#include <stdio.h>
int main(void)
{
    double dip = 5.3e-5;

    printf("%Lf can be written %Le\n", dip, dip);
    getchar();

    return 0;
}