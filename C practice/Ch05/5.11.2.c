#include<stdio.h>
int main(void)
{
    int num, count;
    scanf("%d", &num);
    count=num;
    while (count<num+11)
    {
        printf("%d\n", count);
        count++;
    }
    getchar();
    getchar();

    return 0;
}