#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    float investment=5000,rate=0.1;

    for(year=1;year<=15;year++)
    {
        printf("In %.2i year,rate is %.1f%%,investment is %.2f.\n",year,rate*100,investment);

        investment=investment*(1+rate);
        rate=rate+0.005;
    }
    return 0;
}
