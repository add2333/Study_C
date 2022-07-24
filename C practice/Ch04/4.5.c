#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MAX);
    printf("one byte = %d bits on this system.\n",CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    getchar();

    return 0;
    
}