#include <stdio.h>
int main(void)
{
    const int FIRST_OZ=46;
    const int NEXT_OZ=20;

    int weight, cost;
    printf("   weight    cost\n");
    for (weight=1, cost=FIRST_OZ; weight<=5; weight++,
         cost+=NEXT_OZ)
        printf("%4d %12d\n",weight, cost);
    getchar();

    return 0;
}