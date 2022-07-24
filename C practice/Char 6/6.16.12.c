#include <stdio.h>
#include <math.h>
int main(void)
{
    double i; 
    int n;
    double temp=0.0;
    double ans_1=0.0;
    double ans_2=0.0;
     
    printf("Please enter the terms you want ");
    printf("(<=0 to quit): ");
    scanf("%d", &n);
    //序列1，全正
    for (i=1; i<=n; i++)
        ans_1+=1/i;
    //序列2，隔项变号
    for (i=1; i<=n; i++)
        ans_2+=((1/i)*pow(-1, i));
    printf("%15.10lf\n%15.10lf\n",ans_1, ans_2);
   
    printf("Done!");
    getchar();
    getchar();

    return 0;
}
