/*two func.c--one file contains two functions*/
#include <stdio.h>
void butler(void);
int main()
{
    printf("i will summom the butler function.\n");
    butler();
    printf("yes,bring me some tea and writeable DVDs.\n");

    return 0;
}
void butler(void)
{
    printf("you rang, sir?\n");
}