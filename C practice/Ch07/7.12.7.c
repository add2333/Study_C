#include <stdio.h>
#define FIRST_RATE 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25
#define BASIC 10.00
#define OVERTIME 15.00
#define LINE 40.00 //加班时间分界线
int main(void)
{
    double Pretax_salary=0.0; 
    double Aftertax_salary=0.0; 
    double worktime=0.0; //工时
    double fax=0.0; //税

    printf("Please enter the time you worked(in hours): ");
    scanf("%lf", &worktime);
    if (worktime<=LINE)
        Pretax_salary=worktime*BASIC;
    else
        Pretax_salary=LINE*BASIC+(worktime-LINE)*OVERTIME;
    
    if (Pretax_salary<=300)
        Aftertax_salary=Pretax_salary*(1.0-FIRST_RATE);
    else if (Pretax_salary<=450)
        Aftertax_salary=300*(1.0-FIRST_RATE)+(Pretax_salary-300)*(1.0-SECOND_RATE);
    else 
        Aftertax_salary=300*(1.0-FIRST_RATE)+150*(1.0-SECOND_RATE)+(Pretax_salary-300-150)*(1.0-THIRD_RATE);
    
    printf("%lf", Aftertax_salary);
    getchar();
    getchar();
    
    return 0;    
}