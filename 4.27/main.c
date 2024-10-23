#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    for(a=1;a<=500;a++)
    {
        for(b=a;b<=500;b++)
        {
            for(c=1;c<=500;c++)
            {
                if(a*a+b*b == c*c)
                {
                    printf("%i\t%i\t%i\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
