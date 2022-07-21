#include <stdio.h>
#define MIN_PER_HOUR 60;
int main(void)
{
    int min, omin, ohour;

    printf("请输入分钟（输入小于或等于0的值来退出）\n");
    scanf("%d", &min);
    while (min>0)
    {
        omin=min%MIN_PER_HOUR;
        ohour=min/MIN_PER_HOUR;
        printf("%d 分钟是%d小时, %d分钟\n", min, ohour, omin);
        printf("请再次输入分钟（输入小于或等于0的值来退出）\n");
        scanf("%d", &min);
    }
    getchar();

    return 0;
}