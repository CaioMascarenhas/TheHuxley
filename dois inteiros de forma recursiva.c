#include <stdio.h>


int mdc(int x, int y, int z)
{   
if(x>y)
{
    if(x%y ==0)
    {
        return y;
    }
    else
    {
        z = x%y;
        mdc(y,z,0);
    }
}
else
{
        if(y%x ==0)
    {
        return x;
    }
    else
    {
        z = y%x;
        mdc(x,z,0);
    }
}
}


int main ()
{
    int x,y,z,resultado;
    
    scanf("%d %d",&x,&y);

    mdc(x,y,z);

    resultado = mdc(x,y,z);

    printf("%d",resultado);

    return 0;
}