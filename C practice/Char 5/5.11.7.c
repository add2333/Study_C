#include <stdio.h>
void cubic(double n);
int main(void)
{
    double num;
    scanf("%lf", &num);
    cubic(num); 
    getchar();
    getchar();

    return 0;
}
void cubic(double n)
{
    printf("%lf", n*n*n);
}
