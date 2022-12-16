#include <stdio.h>

int main()
{
    int consumo, consumoate10, consumoentre11e30, consumoentre31e100,consumo100emdiante;

    scanf("%d", &consumo);

    consumoate10= 7;

    consumoentre11e30 = 7 + ((consumo -10)*1);

    consumoentre31e100 = 27 + ((consumo -30) *2);

    consumo100emdiante = 167 + ((consumo-100) *5);
    
    if (consumo <=10)
    {
        printf("%d", consumoate10);
    }

    else if(consumo >10 && consumo <=30)
    {
        printf("%d", consumoentre11e30);
    }

    else if(consumo >30 && consumo <=100)
    {
        printf("%d", consumoentre31e100);
    }
    
    else if(consumo >100)
    {
        printf("%d", consumo100emdiante);
    }

    return 0;
}