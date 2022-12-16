#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double raiz1(double a, double b, double c)
{
    double delta = ((b*b) -(4*a*c));

    double calculoraiz1;

    calculoraiz1 = -b + (sqrt(delta)) / (2*a);

    return calculoraiz1;
}

double raiz2(double a, double b, double c)
{
    double delta = ((b*b) -(4*a*c));

    double calculoraiz2;

    calculoraiz2 = -b - (sqrt(delta)) / (2*a);

    return calculoraiz2;
}

int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    double resposta = raiz1(a,b,c);

    double resposta2 = raiz2(a,b,c);

    if( a == 0)
    {
       printf("NEESG");
    }
        else if(((b*b) - (4*a*c)) < 0)
        {
            printf("NRR");
        }
            else
            {
              printf("%.2lf\n%.2lf", resposta, resposta2);
            }
    return 0;
}