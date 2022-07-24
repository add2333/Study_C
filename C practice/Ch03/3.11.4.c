#include <stdio.h>
int main(void)
{
    float num=1.0f;

    printf("Enter a floating-point value:");
    scanf("%f", &num);
    printf("fixed point notation: %.6f\n", num);
    printf("exponential natation: %e\n", num);
    printf("p notation: %a", num);
    getchar();
    getchar();

    return 0;
}