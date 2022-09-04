#include <stdio.h>
int GuessProgram (char ch, int n);
int main(void)
{
    int guess=50;
    char response;

    printf("I guess the number you want is %d, Please press big, small or right.", guess);
    while ((response=getchar()) != EOF)
    {
        if (response == 'b')
        {
            guess=GuessProgram(response, guess);
            printf("I guess %d. Please press big, small or right", guess);
        }
        else if (response == 's')
        {
            guess=GuessProgram(response, guess);
            printf("I guess %d. Please press big, small or right", guess);
        }
        else if (response == 'r')
        {
            printf("I am glad to guess it.");
        }
        else
        {
            printf("Sorry, I only understand b for big, s for small or r for right.");
        }

        while ((response=getchar() != '\n'))
            continue;
    }
    printf("Done!");
    getchar();
    getchar();

    return 0;
}

int GuessProgram (char ch, int n)
{
    if (ch == 'b')
    {
        n=n/2;
    }
    else if (ch == 's')
    {
        if (99 == n)
            n=100;
        else
            n=(n+100)/2;
    }
    

    return n;
}