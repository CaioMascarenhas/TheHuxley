#include <stdio.h>
#include <string.h>




int main()
{
    int matriz[3][3];
    int menorvalor=9999;
    double contadordepositivos=0;
    double valordospositivos=0;
    int somadiagprinc=0;
    double delta=0;
    double media=0;

    //funcao de scan
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    // funcao de menor valor
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (matriz[i][j] < menorvalor)
            {
                menorvalor=matriz[i][j];
            }
            
        }
    }

    //funcao de media valores positivos
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (matriz[i][j]>0)
            {   
                contadordepositivos++;
                valordospositivos=valordospositivos+matriz[i][j];
            }

        }
    }
    printf("%lf %lf\n",valordospositivos,contadordepositivos);
    media= valordospositivos/contadordepositivos;

    //funcao soma matriz principal
    somadiagprinc=  matriz[0][1]+ matriz[0][2]+matriz[1][0]+matriz[1][2]+matriz[2][0]+ matriz[2][1];

    //funcao menor valor
    if (menorvalor%2==0)
    {
        delta=1;
    }
    if (menorvalor%2 !=0)
    {
        delta=0;
    }
    
    printf("%.2lf ",media);
    printf("%d ",menorvalor);
    printf("%.0lf ",delta);
    printf("%d",somadiagprinc);
    

    return 0;
}