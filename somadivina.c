#include <stdio.h>





int main()
{

    int ordem;

    scanf("%d",&ordem);

    if (ordem==0)
    {
        printf("vazia");
        return 0;
    }
    
    int matriz1[ordem][ordem];

    for (int i=0; i<ordem; i++)
    {
        for (int j=0; j<ordem; j++)
        {
            scanf ("%d", &matriz1[i][j]);
        }
    }
    
    int matriz2[ordem][ordem];

    for (int i = 0; i < ordem; i++)
    {
        for (int j =0; j < ordem; j++)
        {
            scanf("%d",&matriz2[i][j]);
        }
    }

    for (int i = 0; i < ordem; i++)
    {
        for(int j=0; j<ordem; j++)
        {
            printf("%d\n",matriz1[i][j]+matriz2[i][j]);
        }
    }
    
    

    return 0;
}