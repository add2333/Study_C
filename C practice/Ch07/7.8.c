#include <stdio.h>
#define COVERAGE 350
int main(void)
{
    int square;
    int cans;

    printf("Enter number of square feet to be printed:\n");
    while ((scanf("%d", &square))==1)
    {
        cans=square/COVERAGE;
        cans+=((square%COVERAGE)==0)? 0: 1;
        printf("You need %d %s of paint.\n", cans,(cans==1)?"can":"cans");
        printf("Enter another value to continue.(q to quit)");
    }
    getchar();
    getchar();

    return 0;     
}