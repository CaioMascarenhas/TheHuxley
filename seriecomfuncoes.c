#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
    if (n==0)
    {   
        printf("%d",fatorial(n));
        return 0;
    }
    else
    {
        return n * fatorial(n-1);
    }
    
    
}


int main()
{
    int resultado,n;
    
    scanf("%d",&n);

    fatorial(n);

    resultado = fatorial(n);

    printf("%d",resultado);

    return 0;
}