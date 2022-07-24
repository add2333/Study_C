#include <stdio.h>
int main(void)
{
    const float mass_mol=3.0e-23f;
    const int mass_one=950; /*一夸脱水约为950g*/
    float quart;

    printf("Please enter the quarts: ");
    scanf("%f", &quart);
    printf("The number of the water molecules is %e", 
           quart*mass_one/mass_mol);
    getchar();
    getchar();

    return 0;
}