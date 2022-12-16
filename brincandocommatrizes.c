#include <stdio.h>

int main()
{
    double matriz[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3 ;j++)
        {
            scanf("%lf",&matriz[i][j]);
        }
    }

    double soma=0;

    for(int i=0; i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma=soma+matriz[i][j];
        }
    }
    //printf("soma:%d\n",soma);
    double media=soma/9;

    printf("%.2lf ",media);

    int maiornum=-5555;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3 ;j++)
        {
            if (matriz[i][j]>maiornum)
            {
                maiornum=matriz[i][j];
            }  
        }
    }

    printf("%d ",maiornum);

    if (maiornum==0)
    {
        printf("0 ");
    }

    if (maiornum<0)
    {
        printf("-1 ");
    }

    if(maiornum>0)
    {
        printf("1 ");
    }

    printf("%.0lf",matriz[0][0]+matriz[1][1]+matriz[2][2]);
    
    

    return 0;
}