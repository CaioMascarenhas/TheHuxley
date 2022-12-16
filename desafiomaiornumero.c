#include <stdio.h>
#include <stdlib.h>

void maiornumero(int maior, int entrada)
{
    scanf("%d",&entrada);
    if (entrada==0)
    {
        printf("%d",maior);
        return 0;
    }
    else
    {
        if (entrada>maior)
        {
            maior =entrada;
            maiornumero(maior,0);
        }
        else
        {
            maiornumero(maior,0);
        }
    } 
}

int main()
{
    maiornumero(0,0);

    return 0;
}