#include <stdio.h>


int main()
{
    double v1,v2,v3,v4,v5,v6,v7;
    char p1,p2,p3,p4,p5,p6,p7;
    double r1,r2,r3,r4,r5,r6,r7;

    scanf("%lf %c %lf %c %lf %c %lf %c %lf %c %lf %c %lf %c",&v1,&p1,&v2,&p2,&v3,&p3,&v4,&p4,&v5,&p5,&v6,&p6,&v7,&p7);

    if (p1 == 'p' || p1 =='P')
    {
        r1 = v1*10;
    }
    else
    {
        r1 = v1 * 16;
    }

    if (p2 == 'p' || p2 =='P')
    {
         r2 = v2*10;
    }
    else
    {
         r2 = v2 * 16;
    }

    if (p3 == 'p' || p3 =='P')
    {
         r3 = v3*10;
    }
    else
    {
         r3 = v3 * 16;
    }

    if (p4 == 'p' || p4 =='P')
    {
        r4 = v4*10;
    }
    else
    {
        r4 = v4 * 16;
    }

    if (p5 == 'p' || p5 =='P')
    {
        r5 = v5*10;
    }
    else
    {
        r5 = v5 * 16;
    }

    if (p6 == 'p' || p6 =='P')
    {
        r6 = v6*10;
    }
    else
    {
        r6 = v6 * 16;
    }

    if (p7 == 'p' || p7 =='P')
    {
        r7 = v7*10;
    }
    else
    {
        r7 = v7 * 16;
    }

    printf("%.0lf\n%.0lf",r1+r2+r3+r4+r5+r6+r7,(r1+r2+r3+r4+r5+r6+r7)/3.5);


    return 0;
}