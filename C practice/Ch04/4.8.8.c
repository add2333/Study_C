#include <stdio.h>
#define GAL_LIT 3.785
#define MILE_KM 1.609   
int main(void)
{
    float consume;//消耗的汽油
    float distance;//旅程
    float am, eu;//美国方案和欧洲方案
    float change;//转换后

    printf("Please enter the distance(mile) you have covered.");
    scanf("%f", &distance);
    printf("And enter the gasoline(gallon) you have consumed.");
    scanf("%f", &consume);

    /*转换 英里/加仑 到 升/100公里 */
    change=(consume*GAL_LIT*100)/(MILE_KM*distance);
    printf("change: %.1f\n", change);

    /*American*/
    am=1/(change/100);
    printf("American: %.1f\n", am);

    /*Europe*/
    eu=change;
    printf("Europe: %.1f\n", eu);

    getchar();
    getchar();

    return 0;
}