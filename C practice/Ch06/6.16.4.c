#include <stdio.h>
#define COL 6
#define ROW 6
#define ASCII_A 65 //A的ASCii码是65
int main(void)
{
    int rows;
    int count=0;
    int cols=ASCII_A-1; //保证第一次进行内层第一个for循环时，ch的值为'a'
    char ch;

    for (rows=1; rows<=ROW; rows++)
    {
        for (ch=cols+1; ch<ASCII_A+rows+count; ch++) //从A开始打印，打印与行数相等的字母数后进入下一次循环
        {
            printf("%c", ch);
            cols=(int)ch; //存储这一行打印的最后一个字母
        }
        printf("\n");
        count+=rows;
    }
    getchar();

    return 0;
}