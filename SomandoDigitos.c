#include <stdio.h>
#include <math.h>
int loopscan(int n,int x,int array[]);
int print(int n, int array[], int x,int contador,int valor);

int print(int n, int array[], int x,int contador,int valor)
{   
    
    if(array[valor] !=0)
    {   
        contador = contador + array[valor]%10;
        array[valor] = array[valor]/10;
        return print(n,array,x,contador,array[x-1]);
    }
    else
    {
        printf("%d",contador);
        return 0;
    }
    

}



int loopscan(int n,int x,int array[])
{   
    int contador =0;

    if (x==n+1) 
    {   
        return print(n,array,x,contador,array[x-1]);
    }
    else
    {
        scanf("%d",&array[x]);
        return loopscan(n,x+1,array);
    }
    
    
}


int main()
{
    int n;

    scanf("%d",&n);

    int array[n+1];

    loopscan(n,0,array);

    return 0;
}