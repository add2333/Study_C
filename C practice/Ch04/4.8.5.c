#include <stdio.h>
int main(void)
{
    float time, rate, size;
    
    printf("Please enter the download rate(in Mb/s) and the file size(in MB): ");
    scanf("%f %f", &rate, &size);
    time=size*8/rate;
    printf("At %.2f Mb/s, a file of %.2f MB\n", rate, size);
    printf("downloads in %.2f seconds", time);
    getchar();
    getchar();

    return 0;
}