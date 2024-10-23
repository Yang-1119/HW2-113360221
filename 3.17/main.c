#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    float beginning,charges,credits,limit,balance;

    while(1)
    {
        printf("Please enter your account number(-1 to end):");
        scanf("%d",&number);

        if(number != -1)

        {
            printf("Please enter beginning balance:");
            scanf("%f",&beginning);

            printf("Please enter total charges:");
            scanf("%f",&charges);

            printf("Please enter total credits:");
            scanf("%f",&credits);

            printf("Please enter credit limit:");
            scanf("%f",&limit);

            balance = beginning+charges-credits;

            printf("Account:\t");
            printf("%d\n",number);

            printf("Credit limit:\t");
            printf("%.2f\n",limit);

            printf("Balance:\t");
            printf("%.2f\n",balance);

            if(balance > limit)
            {
                printf("Credit limit Exceeded");
            }

            printf("\n\n");
        }

        else
        {
            break;
        }


    }

    return 0;
}
