#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analyse;");
    printf("Enter q to quit.\n");
    while ((scanf("%lu", &num))==1)
    {
        for (div=2, isPrime=true; div*div<=num; div++)
        {
            if (num%div==0)
            {
                if((div*div)!=num)
                    printf("%lu %lu\n", div, num/div);
                else
                    printf("%lu\n", div);
                isPrime=false;
            }
        }
        if (isPrime)
            printf("%lu is a prime.\n");
        printf("Please enter another number to analyse;");
        printf("Enter q to quit.\n");
    }
    getchar();
    getchar();

    return 0;
}