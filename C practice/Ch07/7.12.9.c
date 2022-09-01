#include <stdio.h>
#include <math.h>
int main(void)
{
    long int num;

    printf("Please enter an positive integer:");
    scanf("%ld", &num);
    if (num<=0)
        printf("Only the positive integer will be accepted.");
    else
    {
        printf("The number you have entered is %ld\n", num);
        for (long int i = 1; i <= sqrt(num); i++)
        {
            if (num%i==0)
                printf("%ld %ld\n", i, num/i);
        } 
    }
    getchar();
    getchar();

    return 0;
}