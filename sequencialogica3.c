#include <stdio.h>




int main()
{   
    int x,y,z;
    int contador=1;
    scanf("%d %d %d",&x,&y,&z);

    if(x!=1)
    {
    printf("1 ");
    for(int i=1; i<=y; i)
    {   
        contador++;
        if (i+z>y)
        {
            return 0;
        }
        
        if (contador%(x) !=0)
        printf("%d ",i+z);
        else
        {
            printf("%d\n",i+z);
        }
        i=i+z;
    }
    }
    if(x==1)
    {   printf("1\n");
        for(int i=1; i<=y; i)
        {
            if (i+z>y)
            {
                return 0;
            }
        printf("%d\n",i+z);
        i=i+z;
        }
    }
    

    return 0;
}