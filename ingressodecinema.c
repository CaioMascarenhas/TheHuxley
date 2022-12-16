#include <stdio.h>

int main()
{
    //estudante =1 idoso=1

    int estudante,idoso;

    scanf("%d%d",&estudante,&idoso);

    if(estudante==1 && idoso==1)
    {
    printf("1");
    }

    else if(estudante==1 && idoso=0)
    {
    printf("1");
    }
    
    else if (estudante==0 && idoso==1)
    printf("1");
    else
    {
    printf("0");
    }
    return 0;
}