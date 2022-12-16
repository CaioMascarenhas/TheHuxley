#include <stdio.h>
#include <math.h>

int clodes(double VC,double DC, double VB, double DB, int n)
{   
    int a,b;
    a = ceil(VB/DC);
    b = ceil(VC/DB);
    if (VC <=0)
    {
        printf("Bezaliel\n");
        return entradas(n-1);
    }
    else if(a <= b)
    {
        printf("Clodes\n");
        return entradas(n-1);
    }
    else
    {
        return clodes(VC-DB,DC+50.0,VB,DB,n);
    }
    
    
}

int entradas(int n)
{   
    double VC,VB,DC,DB;
    if (n==0)
    {
        return 0;
    }
    else
    {
        scanf("%lf %lf %lf %lf",&VC,&VB,&DC,&DB);
        return clodes(VC,DC,VB,DB,n);
    }
    
}

int main()
{
    //C = CLODES B = BEZALIEL//
    int n;

    scanf("%d",&n);

    entradas(n);

    return 0;
}