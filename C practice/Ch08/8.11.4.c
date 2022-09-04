#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    bool inword;
    int wordsnum=0, lettersnum=0; //number of the words and letters
    int ch;

    while ((ch=getchar())!=EOF)
    {
        if (isalpha(ch))
        {
            inword=true;
            lettersnum++;
        }
        else
        {
            inword=false;
            wordsnum++;
        }

    }
    printf("%.2f", (float)lettersnum/(float)wordsnum);
    getchar();
    getchar();

    return 0;
}