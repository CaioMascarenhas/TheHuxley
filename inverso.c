#include <stdio.h>
#include <string.h>


int array(int n, int x,int a[])
{
    if (x==n)
    {   
        print(n,0,a,n-1);
        return 0;
    }
    else
    {
        scanf("%d",&a[x]);
        return array(n,x+1,a);
    }
    
}

int print(int n,int x, int a[],int y)
{   
    if (x==n)
    {
        return 0;
    }
    else
    {
        printf("%d ",a[y]);
        return print(n,x+1,a,y-1);
    }
    
    
}


int main()
{

    int n;

    scanf("%d",&n);

    int a[n];

    array(n,0,a);

    return 0;
}