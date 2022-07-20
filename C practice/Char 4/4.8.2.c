#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[20];
    int length;

    length=strlen(first_name);
    printf("Could I know your first name?\n");
    scanf("%s", first_name);
    printf("\"%s\"\n", first_name);
    printf("\"%20s\"\n", first_name);
    printf("\"%-20s\"\n", first_name);
    printf("%*s", length+3, first_name);
    getchar();
    getchar();

    return 0;
}