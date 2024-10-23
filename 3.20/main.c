#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float rate,salary;

    while(1)
    {
        printf("Enter # of hours worked (-1 to end):");
        scanf("%i",&hours);

        if(hours == -1)
        {
            break;
        }

        else
        {
            printf("Enter hourly rate of the worker($10.00):");
            scanf("%f",&rate);

            if(hours <= 40)
            {
                salary = hours*rate;
            }

            else
            {
                salary = 40*rate + (hours-40)*rate*1.5 ;
            }

            printf("Salary is $%.2f\n\n",salary);


        }
    }
    return 0;
}
