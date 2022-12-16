#include <stdio.h>

int soma3(int n, int t)
{
    if (t==0)
    {   
        printf("%d",n);
        return 0; 
    }
    else
    {
        return somaresto(n+3,t-1);
    }
}
int somaresto(int n, int t)
{
    if (t==0)
    {   
        printf("%d",n);
        return 0;
    }
    else
    {
        return soma3(n+(n%5),t-1);
    }
    
}

int main()
{

    int n,t;

    scanf("%d %d",&n,&t);

    soma3(n,t);

    return 0;
}