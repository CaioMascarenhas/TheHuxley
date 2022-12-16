#include <stdio.h>

int mutiplos(int a,int b,int contador,int x)
{
    if (a>=50)
    {   
        printf("%d",contador);
        return 0;
    }
    if (a%b==0)
    {
        contador++;
        return mutiplos(a+x,b,contador,x);
    }
    else
    {
        return mutiplos(a+x,b,contador,x);
    }
         
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mutiplos(a,b,0,a);
    return 0;
}