#include <stdio.h>
#include <stdlib.h>

void loop(int leituras,int capacidade,int contador)
{   
    int sairam,entraram;
    if (contador>capacidade)
    {
        printf("S");
        return;
    }
    
    if (leituras==0)
    {
        if (contador>capacidade)
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
        return;
    }
    else
    {
        scanf("%d %d",&sairam,&entraram);
        contador = contador-sairam+entraram;
        loop(leituras-1,capacidade,contador);
    }
    
}

int main()
{   
    int leituras,capacidade;
    scanf("%d%d",&leituras,&capacidade);
    loop(leituras,capacidade,0);
    return 0;
}
