#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    float loan,rate,interest;

    while(1)
    {
        printf("Enter loan principal(-1 to end):");
        scanf("%f",&loan);

        if(loan == -1)
        {
            break;
        }
        else
        {
            printf("Enter interest rate:");
            scanf("%f",&rate);

            printf("Enter term of loan in days:");
            scanf("%i",&days);

            interest = loan*days*rate/365 ;

            printf("The interest charge is %.2f\n\n",interest);

        }
    }
    return 0;
}
