#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sales,salary;

    while(1)
    {
        printf("Enter sales in dollars(-1 to end):");
        scanf("%f",&sales);

       if(sales == -1)
        {
           break;
        }

        else
        {
            salary = 200 + sales*0.09 ;

            printf("Salary is:%.2f\n\n",salary);
        }

    }

    return 0;
}
