#include <stdio.h>
void Temperatures(double ftem);
int main(void)
{
    int rv;
    double ftem;
    
    printf("Please enter the temperature(in F,");
    printf("enter the letter q to quit):");
    rv=scanf("%lf", &ftem);
    while (rv==1)
    {
        Temperatures(ftem);
        rv++;
    }
    getchar();
    getchar();

    return 0;
}
void Temperatures(double ftem)
{
    double ctem, ktem;
    const double F_TO_C = 32.0;
    const double C_TO_K = 273.16;
   
    ctem=5.0/9.0*(ftem-F_TO_C);
    ktem=ctem+C_TO_K;
    printf("%.2lf %.2lf", ctem, ktem);
}
