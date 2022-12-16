#include <stdio.h>


int ContaDigitosPares(int n, int contador)
{


    if (n>0)
    {
        if((n%10 ==2) || (n%10 ==4) || (n%10 ==6) || (n%10 ==8) || (n%10 ==0))
        {
            contador = contador +1;
            ContaDigitosPares(n/10,contador);
        }
        else
        {
            ContaDigitosPares(n/10,contador);
        }
    }
    else
    {
        printf("%d",contador);
        return 0;
    }
    

}

int main()
{
    int n;
    int contador =0;
    scanf("%d",&n);

    ContaDigitosPares(n,contador);

    return 0;

}