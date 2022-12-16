#include <stdio.h>

void calculo(int a,int b,int valorinicial,int contador,int aux)
{
    if (valorinicial>=b)
    {   
        printf("%d\n",contador+1);
        funcao(0,0);
        return;
    }
    else
    {
        if (a==1)
        {   
            if (aux>contador)
            {
                contador=aux;
                calculo(valorinicial+1,b,valorinicial+1,contador,0);
            }
            else
            {
                calculo(valorinicial+1,b,valorinicial+1,contador,0);
            }
            return;
        }
        if (a%2==0)
        {
            a=a/2;
            aux=aux+1;
            calculo(a,b,valorinicial,contador,aux);
        }
        else
        {
            a=(3*a)+1;
            aux=aux+1;
            calculo(a,b,valorinicial,contador,aux);
        }   
    }
}

void safadeza(int a,int contador)
{
    if (a==1)
    {
        printf("%d",contador);
        return;
    }
    if (a%2==0)
    {
        a=a/2;
        contador++;
        
    }
    else
    {
        a=(3*a)+1;
        contador++;
        
    }   
    safadeza(a,contador);
    return;
    
}

void funcao(int a, int b)
{   
    
    if(scanf("%d%d",&a,&b)==EOF)
    {
        return;
    }
    printf("%d %d ",a,b);
    if (a==b & a>1)
    {
        safadeza(a,1);
    }
    else if (a<=b)
    {
        calculo(a,b,a,0,0);
    }
    if (b<a)
    {
        calculo(b,a,b,0,0);
    }
    
}

int main()
{
    funcao(0,0);

    return 0;
}