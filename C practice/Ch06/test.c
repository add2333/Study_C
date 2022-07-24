#include <stdio.h>

int main(void)
{
	char line[255];
	int i = 0; // array index
	printf("Enter a line to reverse:\n");
	while (scanf("%c", &line[i]), line[i] != '\n')
		i++;

	for (; 0 <= i; i--) // previous loop leaves i in right position
		printf("%c", line[i]);

	printf("\n");
    getchar();
    getchar();

	return 0;
}