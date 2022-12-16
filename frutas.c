#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int dias;
    double contador=1;
    double preco,quantidade=0;
    double aux;
    char frutas[50];

    scanf("%d ",&dias);

    for(int i=1; i<=dias; i++)
    {   
        scanf("%lf ",&preco);
        //scanf ("%[^\n]", frutas);
        gets(frutas);
        for(int j=0; j<strlen(frutas); j++)
        {
            if (frutas[j]==' ')
            {
                contador++;
            }
            
        }
        printf("dia %d: %.0lf kg\n",i,contador);
        quantidade=quantidade+(contador);
        contador=1;
        aux=aux+preco;
        
    }
    printf("%.2lf kg por dia\n",quantidade/dias);
    printf("R$ %.2lf por dia\n",aux/dias);



    return 0;
}