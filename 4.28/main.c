#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code,hours,items;
    float salary,rate,sales,profit;

    printf("Please enter your pay code\n");
    printf("(1.Managers  2.Hourly workers  3.Commission  4.Pieceworkers):");
    scanf("%i",&code);

    switch(code)
    {
        case 1:

            printf("Please enter your employee salary:");
            scanf("%f",&salary);
            printf("Your salary is %.2f",salary);
            break;

        case 2:

            printf("Please enter the working hours this week:");
            scanf("%i",&hours);
            printf("Please enter hourly rate:");
            scanf("%f",&rate);
             if(hours <= 40)
            {
                salary = hours*rate;
            }

            else
            {
                salary = 40*rate + (hours-40)*rate*1.5 ;
            }
            printf("Your salary is %.2f",salary);
            break;

        case 3:
            printf("Please enter sales in dollars:");
            scanf("%f",&sales);
            salary = 250 + sales*0.057;
            printf("Your salary is %.2f", salary);
            break;

        case 4:
            printf("Please enter how many items you salesed:");
            scanf("%i",&items);
            printf("Please enter how much profit for each items:");
            scanf("%f",&profit);
            salary = items*profit;
            printf("Your salary is %.2f", salary);
            break;
    }
    return 0;
}
