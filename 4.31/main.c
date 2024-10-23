#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    for(y=1;y<=5;y++)
    {
        for(x=4-y;x>=0;x--)
        {
            printf(" ");
        }
        for(x=1;x<=1+(y-1)*2;x++)

        {
            printf("*");
        }
        printf("\n");
    }

     for(y=6;y<=9;y++)
    {
        for(x=1;x<=y-5;x++)
        {
            printf(" ");
        }
        for(x=(9-y)*2+1;x>=1;x--)

        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
