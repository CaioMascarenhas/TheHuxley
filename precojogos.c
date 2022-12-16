#include <stdio.h>
#include <math.h>
#include <string.h>
double loopscan(double n,double x,double dificuldade,double preco);


double calculo(double n,double x,double dificuldade, double preco,double aux)
{
    if (aux==3)
    {   
        if (preco<45)
        {
            printf("Jogo[%.0lf] = R$45.00");
        }
        else 
        {
            printf("Jogo[%.0lf] = R$%.2lf",x,preco);
        }
        return loopscan(n,x+1,0,0);
    }
    if (dificuldade==0)
    {   
        //printf("%.0lf",aux);
        if (preco>100)
        {
            calculo(n,x,dificuldade,preco*0.75,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.875,aux+1);
        }    
    }

    if (dificuldade==1)
    {
        if (preco>100)
        {
            return calculo(n,x,dificuldade,preco*0.8,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.9,aux+1);
        }    
    }

    if (dificuldade==2)
    {
        if (preco>100)
        {
            return calculo(n,x,dificuldade,preco*0.82,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.91,aux+1);
        }    
    }

    if (dificuldade==3)
    {
        if (preco>100)
        {
            return calculo(n,x,dificuldade,preco*0.85,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.925,aux+1);
        }    
    }

    if (dificuldade==4)
    {
        if (preco>100)
        {
            return calculo(n,x,dificuldade,preco*0.88,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.94,aux+1);
        }    
    }

    if (dificuldade==5)
    {
        if (preco>100)
        {
            return calculo(n,x,dificuldade,preco*0.90,aux+1);
        }
        if (preco<100)
        {
            return calculo(n,x,dificuldade,preco*0.95,aux+1);
        }    
    }
    
    
}


double loopscan(double n,double x,double dificuldade,double preco)
{
    if (x==n)
    {
        return 0;
    }
    else
    {
        scanf("%lf%lf",&dificuldade,&preco);
        if (preco<45)
        {
            printf("Jogo[%.0lf] = R$%.2lf",x,preco);
            return loopscan(n,x+1,dificuldade,preco);
        }
        else
        {
            return calculo(n,x,dificuldade,preco,0);
        }
    }
    
}

int main()
{
    double n;

    scanf("%lf",&n);

    loopscan(n,0,0,0);

    return 0;
}