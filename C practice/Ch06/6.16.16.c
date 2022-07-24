#include <stdio.h>
#define A_RATE 0.1
#define B_RATE 0.05
int main()
{
    const float A_INITIAL=100.0f;
    float B_INITIAL=100.0f;
    float a, b;
    int years;

    a=A_INITIAL;
    b=B_INITIAL;
    do
    {
        a+=A_INITIAL*A_RATE;
        b=b*(B_RATE+1);
        years++;
    }while(a>=b);
    printf("%10.2f %10.2f %10d", a, b, years);
    getchar();
    return 0;
}