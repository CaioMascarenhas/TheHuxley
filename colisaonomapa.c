#include <stdio.h>
#include <string.h>



int main()
{   
    int n,p;
    int movimentos;
    char direcoes[100];
    int pocisaoX,pocisaoY;

    scanf("%d %d",&n,&p);

    int matriz[n][p];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    scanf("%d",&movimentos);

    for(int i=0; i<movimentos; i++)
    {
        scanf(" %c ",&direcoes[i]);
    }

    scanf(" %d%d",&pocisaoX,&pocisaoY);

    if(pocisaoX<0 || pocisaoY<0)
    {
        printf("0,0"); 
        return 0;
    }

    for(int i=0; i<strlen(direcoes); i++)
    {
        if (direcoes[i]=='C')
        {
            if (matriz[pocisaoX-1][pocisaoY]==0)
            {
                pocisaoX=pocisaoX;
                pocisaoY=pocisaoY;
            }
            if (matriz[pocisaoX-1][pocisaoY]==1)
            {
                pocisaoX=pocisaoX-1;
                pocisaoY=pocisaoY;
            }
             
        }
        if (direcoes[i]=='D')
        {
            if (matriz[pocisaoX][pocisaoY+1]==0)
            {
                pocisaoX=pocisaoX;
                pocisaoY=pocisaoY;
            }
            if (matriz[pocisaoX][pocisaoY+1]==1)
            {   
                if (pocisaoY+1>=p)
                {
                    pocisaoY=pocisaoY;
                }
                else{
                pocisaoY +=1;}
            }
        
        }
        if (direcoes[i]=='B')
        {
            if (matriz[pocisaoX+1][pocisaoY]==0)
            {
                pocisaoX=pocisaoX;
                pocisaoY=pocisaoY;
            }
            if (matriz[pocisaoX+1][pocisaoY]==1)
            {
                pocisaoX=pocisaoX+1;
                pocisaoY=pocisaoY;
            }
        
        }

        if (direcoes[i]=='E')
        {
            if (matriz[pocisaoX][pocisaoY-1]==0)
            {
                pocisaoX=pocisaoX;
                pocisaoY=pocisaoY;
            }
            if (matriz[pocisaoX][pocisaoY-1]==1)
            {
                pocisaoX=pocisaoX;
                pocisaoY=pocisaoY-1;
            }
        
        }
        
        else
        {
            pocisaoX=pocisaoX;
        }
        
    }

    printf("(%d,%d)",pocisaoX,pocisaoY);

    return 0;
}