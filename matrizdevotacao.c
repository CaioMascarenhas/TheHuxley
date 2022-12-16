#include <stdio.h>


int main()
{   
    int n,p;

    scanf("%d %d",&n,&p);

    int matriz[p][n];
    int princesa[50];

    //todo array princesa valendo 0
    for(int i=0; i < 50; i++)
    {
        princesa[i]=0;
    }


    //scan matriz
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    //contador de votos
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<p; i++)
        {   
            printf("i:%d j:%d\n",i,j);
            if(matriz[i][j]==1)
            {   
                princesa[j+1]++;
            }
        }
    }

    // loop de print
    

    for (int i=1; i<=n; i++)
    {
        printf("Princesa %d: %d voto(s)\n",i,princesa[i]);
    }
    

    return 0;
}