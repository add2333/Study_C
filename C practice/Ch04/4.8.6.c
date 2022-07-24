#include <stdio.h>
#include <string.h>
int main(void)
{
    char fname[20], lname[20];
    int flength, llength;

    printf("Please enter your first name: ");
    scanf("%s", fname);
    printf("Please enter your last name: ");
    scanf("%s", lname);
    
    flength=strlen(fname);
    llength=strlen(lname);

    printf("%s %s\n", fname, lname);
    printf("%*d %*d\n", flength, flength, llength, llength);
    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", flength, flength, llength, llength);
    getchar();
    getchar();

    return 0;
}
