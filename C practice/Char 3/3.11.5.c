#include <stdio.h>
int main(void)
{
    int ages_y;
    double ages_s;

    printf("Please enter your ages: ");
    scanf("%d", &ages_y);
    ages_s=ages_y*3.156e7;
    printf("Your ages in secs is %e", ages_s);
    getchar();
    getchar();

    return 0;
}