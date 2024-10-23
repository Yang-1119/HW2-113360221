#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    for(y=1;y<=10;y++)
    {
        for(x=1;x<=y;x++)
        {
            printf("%s","*");
        }
        printf("\n");
    }

    printf("\n");

    for(y=1;y<=10;y++)
    {
        for(x=10;x>=y;x--)
        {
            printf("%s","*");
        }
        printf("\n");
    }

    printf("\n");

    for(y=1;y<=10;y++)
    {
        for(x=1;x<y;x++)
        {
            printf("%s"," ");
        }
        for(x=10;x>=y;x--)
        {
            printf("%s","*");
        }
        printf("\n");
    }

    printf("\n");

    for(y=1;y<=10;y++)
    {
        for(x=9;x>=y;x--)
        {
            printf("%s"," ");
        }
        for(x=1;x<=y;x++)
        {
            printf("%s","*");
        }
        printf("\n");
    }


    return 0;
}
