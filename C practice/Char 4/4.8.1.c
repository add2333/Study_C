#include <stdio.h>
int main(void)
{
    char first_name[40], last_name[40]; //first是名，last是姓

    printf("Please enter your first name and last name: ");
    scanf("%s %s", first_name, last_name);
    printf("Hello! %s %s", last_name, first_name);
    getchar();
    getchar();

    return 0;
}