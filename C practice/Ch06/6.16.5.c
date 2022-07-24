#include <stdio.h>
#define ASCII_A 65 //A的ASCii码是65
int main(void)
{
    int row; //总行数
    int n; //以n表示当前行代码
    char j; //j表示正序字符第j个
    char k; //k表示逆序字符第k个
    int i; //i表示控制空格的循环中一行第i个字符（空格）
    char let; //用户输入的字符
    char ch; //用于printf中

    printf("Please enter a capital letter:");
    scanf("%c", &let);
    printf("The letter you enter is %c\n", ch);
    row=(int)let-ASCII_A+1; //表示出当前行数

    for (n=1; n<=row; n++)
    {
        /*控制空格*/
        for (i=1; i<=(row-n); i++)
            printf(" ");
        /*控制正序字符*/
        for (j=ASCII_A; j<ASCII_A+n-1; j++)
            printf("%c", j);
        /*控制逆序字符*/
        for (k=ASCII_A+n-1; k>=ASCII_A; k--)
            printf("%c", k);

        printf("\n");
    }
    getchar();
    getchar();

    return 0;
}