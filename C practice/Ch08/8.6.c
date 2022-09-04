#include <stdio.h>
void display (char character, int width, int lines);
int main(void)
{
    int ch;
    int cols, rows;

    while((ch=getchar())!='\n')
    {
        if (scanf("%d %d", &cols, &rows)!=2)
            break;
        display((char)ch, cols, rows);
        while (getchar()!='\n')
            continue;
        printf("Enter another charcater and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.");

    return 0;
}

void display (char character, int width, int lines)
{
    int row, col;

    for (row=1; row<=width; row++)
    {
        for (col=1; col<=lines; col++)
            putchar(character);
        putchar('\n');
    }
}