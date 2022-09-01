#include <stdio.h>
int main(void)
{
    long int aver_even=0, aver_odd=0, sum_odd=0, sum_even=0; //统计奇偶数的平均值和数量
    long int num=0; //用户输入的数字
    int num_odd=0;
    int num_even=0;

    printf("Please enter a number(press 0 to quit)");
    scanf("%ld", &num);
    while (num!=0)
    {
        if (num%2==0)
        {
            num_even++;
            sum_even+=num;
        }
        else
        {
            num_odd++;
            sum_odd+=num;
        }
        scanf("%ld", &num);
    }
    aver_even=sum_even/num_even;
    aver_odd=sum_odd/num_odd;

    printf("The number of even is %d, the average of them is %ld\n", num_even, aver_even);
    printf("The number of odd is %d, the average of them is %ld\n", num_odd, aver_odd);
    getchar();
    getchar();

    return 0;
}
