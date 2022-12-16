#include <stdio.h>



int repetiçãodevezes(int vezes)
{
    int x,y;
    scanf("%d %d %d",&vezes,&x,&y);


}





int mdc(int x, int y, int z)
{   
    if(x%y ==0)
    {
        printf("MDC(%d,%d) = %d", x,y,x);
        return 0;
    }
    else
    {
        z = x%y;
        mdc(y,z,0);
    }
}



int main ()
{
    int x,y,z;
    int vezes;



    return 0;
}