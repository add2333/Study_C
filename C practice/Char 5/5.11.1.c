#include <stdio.h>
#define MIN_PER_HOUR 60;
int main(void)
{
    int min, omin, ohour;

    printf("��������ӣ�����С�ڻ����0��ֵ���˳���\n");
    scanf("%d", &min);
    while (min>0)
    {
        omin=min%MIN_PER_HOUR;
        ohour=min/MIN_PER_HOUR;
        printf("%d ������%dСʱ, %d����\n", min, ohour, omin);
        printf("���ٴ�������ӣ�����С�ڻ����0��ֵ���˳���\n");
        scanf("%d", &min);
    }
    getchar();

    return 0;
}