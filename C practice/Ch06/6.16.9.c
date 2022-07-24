#include <stdio.h>
double calculate(double j, double k);
int main(void)
{
    double a, b;
    double ans;

    scanf("%lf %lf", &a, &b);
    ans=calculate(a, b);
    printf("%lf", ans);
    getchar();
    getchar();

    return 0;
}

double calculate(double j, double k)
{
    double temp;
    temp=(j-k)/(j*k);
    return temp;
}