
#include <stdio.h>

double fatorial(n);

double eprimo(int n, int x)
{
    if (x>=n)
    {
        return n;
    }
    else if (n%x == 0.0)
    {
        return eprimo(n+1.0,x);
    }
    else 
    {
        return eprimo(n,x+1.0);
    }
}

double serie(double n)
{
    if (n==0)
    {
        return 0.0;
    }
    else
    {
        return (fatorial(n) / eprimo(n,2)) + serie (n-1);
    }
}

double fatorial(double n)
{
    if ((n==0) || (n==1))
    {
        return 1.0;
    }
    else 
    {
        return n * fatorial(n-1);
    }
}

double print(int n)
{
    if (n==0.0)
    {
        return 0.00;
    }
    if (n==1)
    {
        printf("%d!/%.0lf",n,eprimo(n,2));
    }
    else
    {
        print(n-1);
        printf(" + %d!/%.0lf",n,eprimo(n,2));
    }
}

int main()
{
    double n;

    scanf ("%lf",&n);

    print(n);

    printf("\n%.2lf\n",serie(n));

    return 0;
}

