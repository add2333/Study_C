#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch=getchar())!='#')
    {
        if (ch!='\n')
        {
            printf("Step 1\n");
            if (ch!='c')
            {
                if (ch=='b')
                    break;
                else
                {
                    if (ch=='h')
                        printf("Step 3\n");
                    else
                        printf("Step 2\nStep 3\n");
                }
            }
        }
            
    }
    printf("Done!\n");
    getchar();
    getchar();

    return 0;
}