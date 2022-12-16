#include <stdio.h>

int divisorde3(int n,int d, int contador)
{   
 
    if (d>n)
    {   
        if (contador ==0)
        {
            return printf("O numero nao possui divisores multiplos de 3!\n");
        }
        
        printf("%d\n",contador);
        return 0;
    }
    else if (n%d==0)
    {
        return divisorde3(n,d+3,contador+1);
    }
    else
    {
        return divisorde3(n,d+3,contador);
    }
    
}

int main()
{
    int n,d,contador;

    d = 3;

    contador = 0;
    
    scanf("%d",&n);

    divisorde3(n,d,contador);

    return 0;
}