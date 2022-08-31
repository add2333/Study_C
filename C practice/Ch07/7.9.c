#include <stdio.h>
int main(void)
{
    const float MIN=0.0f;
    const float MAX=100.0f;

    float score;
    float total=0.0f;
    int n=0;
    float min=MAX;
    float max=MIN;

    printf("Enter the first score (q to quit)");
    while ((scanf("%f", &score))==1)
    {
        if (score>MAX || score<MIN)
        {
            printf("%.1f is an invaild value.", score);
            continue;
        }
        printf("Accept %.1f.\n", score);
        min=(score<min)? score: min;
        max=(score>max)? score: max;
        total+=score;
        n++;
        prinf("Enter the next value (q to quit): \n");
    }   
    if (n>0)
    {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    getchar();
    getchar();
    return 0;
}