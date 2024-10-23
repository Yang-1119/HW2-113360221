#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    for(y=1;y<=3;y++)
    {
            for(x=1;x<=12;x++)
            {
                if( y==1 || y==3 ||(y==2 && x==1) ||(y==2 && x==12))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        printf("\n");
    }
    return 0;
}
