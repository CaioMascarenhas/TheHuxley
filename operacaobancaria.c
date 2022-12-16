#include <stdio.h>



int main()
{   

    double credito=0;
    double debito=0;

    for(int i=0; i<=100; i++)
    {   
        int a;
        double b;
        scanf("%d",&a);
        if (a ==-1)
        {   
            printf("Creditos: R$ %.2lf\n",credito);
            printf("Debitos: R$ %.2lf\n",debito);
            printf("Saldo: R$ %.2lf\n",credito-debito);
            return 0;
        }
        scanf("%lf",&b);
        
        if (a==1)
        {
            credito=credito+b;
        }
        if (a==0)
        {
            debito=debito+b;
        } 
        
    }

    printf("Creditos: R$ %.2lf\n",credito);
    printf("Debitos: R$ %.2lf\n",debito);
    printf("Saldo: R$ %.2lf\n",credito-debito);
    return 0;
}