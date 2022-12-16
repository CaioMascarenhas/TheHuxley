#include <stdio.h>

int triangular(int a, int entrada)
{
    if (a == entrada/2 || entrada <0)
    {   
        printf("Falso");
        return 0;
    }
    else if ((a*(a+1)*(a+2)) == entrada)
    {
        printf("%d * %d * %d = %d\n",a,a+1,a+2,entrada);
        printf("Verdadeiro");
        return 0;
    }
    else
    {
        return triangular(a+1,entrada);
    }
    
}

int main()
{
    int entrada,a;
    
    scanf("%d", &entrada);

    triangular(0,entrada);

    return 0;
}