#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
    char ch;
    char prev;
    long n_chars=0L;
    int n_lines=0;
    int n_words=0;
    int p_lines=0;
    bool inword=false;

    printf("Please enter text to be analysed(| to terminate): ");
    prev='\n';
    while ((ch=getchar()!=STOP))
    {
        n_chars++;
        if (ch=='\n')
            n_lines++;
        if (!isspace(ch) && !inword)
        {
            inword=true;
            n_words++;
        }
        if (isspace(ch) && inword)
            inword=false;
        prev=ch;
    }

    if (prev!='\n')
        p_lines=1;
    
    getchar();
    getchar();

    return 0;  
}