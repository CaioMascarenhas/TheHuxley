#include <stdio.h>

int checamultiplo(int n,int a,int b,int c)
{   
    
    if(a==b+1)
    {   
        if (c==0)
        {
            printf("INEXISTENTE");
        }
        
        return 0;
    }
    else if (a%n==0)
    {
        printf("%d\n",a);
        return checamultiplo(n,a+1,b,c+1);
    }
    else
    {
        return checamultiplo(n,a+1,b,c);
    }
}

int main()
{
    int a,b,n,c;

    c=0;
    
    scanf("%d %d %d",&n,&a,&b);

    checamultiplo(n,a,b,c);

   
    return 0;
}