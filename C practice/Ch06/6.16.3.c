#include <stdio.h>
#define COL 6
#define ROW 6
int main(void)
{
    char ch;
    int cols, rows;
     
    for (rows=1; rows<=ROW; rows++)
    {
        for (ch='F'; ch>'F'-rows; ch--)
            printf("%c", ch);
        printf("\n");
    }
    getchar();

    return 0; 
}