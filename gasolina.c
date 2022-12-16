#include <stdio.h>
#include <math.h>

int main ()
{
    double litragem;

    // A=Alcool  G=Gasolina  D=diesel C=COMBUSTIVEL
    char C;

    scanf("%lf %c",&litragem, &C);

    if(C == 'A')
    {   
        if(litragem <=20)
        {
            printf("R$ %.2lf", (litragem * 1.90) - ((litragem * 1.90) * 0.03));
        }

        else
        {
            printf("R$ %.2lf", (litragem * 1.90) - ((litragem * 1.90) * 0.05));
        }
    }
    else if(C == 'G')
    {   
        if(litragem <=20)
        {
            printf("R$ %.2lf", (litragem * 2.50) - ((litragem * 2.50) * 0.04));
        }

        else
        {
            printf("R$ %.2lf", ((litragem * 2.50) - ((litragem * 2.50) * 0.06)));
        }
    }
    else if(C == 'D')
    {   
        if(litragem <=25)
        {
            printf("R$ %.2lf", (litragem * 1.66));
        }    

        else
        {
            printf("R$ %.2lf", (litragem * 1.66) - ((litragem * 1.66) * 0.04));
        }
    }


    return 0;
}