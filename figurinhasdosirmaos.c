#include <stdio.h>


int checkarrayjoao(int contadorJ,int arr[],int n,int y,int z,int h)
{
if (y==n)
{   
    
    return contadorJ;
}
if (arr[y]%2==0)
{   
    if (z==n)
    {
        contadorJ=contadorJ+arr[y];
        return checkarrayjoao(contadorJ,arr,n,y+1,0,h);
    }
    if (y==z)
    {
        return checkarrayjoao(contadorJ,arr,n,y,z+1,h);
    }  
    if (arr[y]==arr[z])
    {   
        {   if (y==h)
        {
            return checkarrayjoao(contadorJ,arr,n,y+1,0,z);
        }
        else
        {
            contadorJ=contadorJ+arr[y];
            return checkarrayjoao(contadorJ,arr,n,y+1,0,z);
        } 
    }
    }
    if (arr[y]!=arr[z])
    {
        return checkarrayjoao(contadorJ,arr,n,y,z+1,h);
    }    
}
else
{
    return checkarrayjoao(contadorJ,arr,n,y+1,0,h);
}
  
}

int checkarraymaria(int contadorM,int arr[],int n,int y,int z,int h)
{
if (y==n)
{   
    
    return contadorM;
}
if (arr[y]%2!=0)
{   
    if (z==n)
    {
        contadorM=contadorM+arr[y];
        return checkarraymaria(contadorM,arr,n,y+1,0,h);
    }
    if (y==z)
    {
        return checkarraymaria(contadorM,arr,n,y,z+1,h);
    }  
    if (arr[y]==arr[z])
    {   if (y==h)
        {
            return checkarraymaria(contadorM,arr,n,y+1,0,z);
        }
        else
        {
            contadorM=contadorM+arr[y];
            return checkarraymaria(contadorM,arr,n,y+1,0,z);
        }
        
    }
    if (arr[y]!=arr[z])
    {
        return checkarraymaria(contadorM,arr,n,y,z+1,h);
    }    
}
else
{
    return checkarraymaria(contadorM,arr,n,y+1,0,h);
}
   
}



int quantoscada(int joao,int maria,int arr[],int n,int y)
{   

        if (y==n)
        {   
            printf("%d\n%d\n",joao,maria);
            return 0;
        }
        
        if ((arr[y]%2)==0)
        {   
            joao++;
            return quantoscada(joao,maria,arr,n,y+1);
        }
        else
        {
            maria++;
            return quantoscada(joao,maria,arr,n,y+1);
        }     
}

int scanarray(int x,int n,int arr[])
{
    if (x==n)
    {   
        quantoscada(0,0,arr,n,0);
        return 0;
    }
    else
    {
        scanf("%d",&arr[x]);
        return scanarray(x+1,n,arr);
    }
       
}
int main()
{
    int n,m,j;
    int arr[n];
    scanf("%d",&n);
    scanarray(0,n,arr);

    m = checkarraymaria(0,arr,n,0,0,99);
    j = checkarrayjoao(0,arr,n,0,0,99);
    
    if (m>j)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",j);
    }
    
}