#include <stdio.h>
int loopscan(int n,int c,int d,int contador,char lado);
int muralha(int n, int c, int d,char x,int contador,char lado);

int loopscan(int n,int c,int d,int contador,char lado)
{
    char x;
    if (n==1)
    {   
        printf("%d",contador);
        return 0;
    }
    else
    {    
        scanf(" %c ",&x);
        muralha(n,0,0,x,contador,lado);
    }
    
}

int muralha(int n, int c, int d,char x,int contador,char lado)
{   

    if (c==d && x=='C' && lado =='a')
    {
        return loopscan(n-1,c+1,d,contador,'a');
    }

    else if (c==d && x=='C' && lado =='b')
    {
        return loopscan(n-1,c+1,d,contador+1,'a');
    }
    
    else if (c==d && x=='D' && lado =='a')
    {
        return loopscan(n-1,c,d+1,contador,'a');
    }

    else if (c==d && x=='D' && lado =='b')
    {
        return loopscan(n-1,c,d+1,contador+1,'a');
    }
    
    
    else if (c>d && x=='C')
    {
        return loopscan(n-1,c+1,d,contador,'a');
    }

    else if (c>d && x=='D')
    {
        return loopscan(n-1,c,d+1,contador,'a');
    }
    
    else if (c<d && x=='C')
    {
        return loopscan(n-1,c+1,d,contador,'b');
    }

    else if (c<d && x=='D')
    {
        return loopscan(n-1,c,d+1,contador,'b');
    }
    
    else
    {
        printf("deu ruim");
    }
    

}

int main()
{
    int n;

    scanf("%d",&n);

    loopscan(n,0,0,0,'a');

    return 0;
}