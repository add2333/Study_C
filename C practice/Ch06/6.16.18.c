#include <stdio.h>
#define INI_FRIENDS 5
int main(void)
{
    int years;
    int friends;

    for (years=1, friends=INI_FRIENDS; friends<150; years++)
        friends=(friends-years)*2;
    printf("It spends %d years having %d friends.", years, friends);
    getchar();

    return 0;
}