//其实还需要别的功能，但是我懒了qaq
#include <stdio.h>
#include <stdlib.h>
#define FIRST_RATE 0.15
#define SECOND_RATE 0.2
#define THIRD_RATE 0.25
#define OVERTIME 15.00
#define LINE 40.00 //加班时间分界线
int main(void)
{
    double Pretax_salary=0.0; 
    double Aftertax_salary=0.0; 
    double worktime=0.0; //工时
    double fax=0.0; //税
    double RATE=0.0;
    int choice;

    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                              2) $9.33/hr\n");
    printf("3) $10.00/hr                             4) $11.20/hr\n");
    printf("5) quit\n");
    scanf("%d", &choice);
    switch(choice)
    {   
        case 1: RATE=8.75;
                break;
        case 2: RATE=9.33;
                break;
        case 3: RATE=10.00;
                break;
        case 4: RATE=11.20;
                break;
        case 5: exit(0);
                break;
    }

    printf("Please enter the time you worked(in hours): ");
    scanf("%lf", &worktime);
    if (worktime<=LINE)
        Pretax_salary=worktime*RATE;
    else
        Pretax_salary=LINE*RATE+(worktime-LINE)*OVERTIME;
    
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