#include <stdio.h>
#define ACOST 2.05
#define BCOST 1.15
#define CCOST 1.09
#define DISCOUNT 0.05
#define O_COST1 6.5
#define O_COST2 14
#define O_COST3 0.5
int main(void)
{
    int weight, a_weight, b_weight, c_weight, sum_weight;
    char ch;
    double vege_cost, sum_cost, other_cost;
    int discount=0;
    weight=a_weight=b_weight=c_weight=0;
    vege_cost=sum_cost=other_cost=0.0;

    while ((ch=getchar())!='q')
    {
        switch (ch)
        {
            case 'a':
            {
                scanf("%d", &weight);
                a_weight+=weight;
                break;
            }
            
            case 'b':
            {
                scanf("%d", &weight);
                b_weight+=weight;
                break;
            }

            case 'c':
            {
                scanf("%d", &weight);
                c_weight+=weight;
                break;
            }
        }  
    } 

    vege_cost=a_weight*ACOST+b_weight*BCOST+c_weight*CCOST;
    sum_weight=a_weight+b_weight+c_weight;
    if (vege_cost>=100)
    {
        vege_cost=vege_cost*(1-DISCOUNT);
        discount=DISCOUNT*100;
    }    
    if (sum_weight<=5)
        other_cost=O_COST1;
    else if (sum_weight<=20)
        other_cost=O_COST2;
    else 
        other_cost=O_COST2+(sum_weight-20)*O_COST3;
    sum_cost=vege_cost+other_cost;

    printf("weight:%d\ndicount:%d%%\nvegetable cost:%lf\nother cost:%lf\nsum up:%lf"
            ,sum_weight, discount, vege_cost, other_cost, sum_cost);
    getchar();
    getchar();

    return 0;
}