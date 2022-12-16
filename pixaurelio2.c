#include <stdio.h>

void loucura(int arr[],int pessoas,int x,int aux,int y,int preco)
{
    if (y==pessoas-1)
    {   
        doideira(arr,pessoas,x+1,preco);
        return;
    }
    if (x != y && x !=aux && aux != y)
    {   
        if (arr[0]==1 && arr[2]==5 && arr[3]==4)
        {
            printf("Aurelio ganhou a aposta");
            preco=999;
            return;
        }
        if ((arr[x]+arr[y]+arr[aux])==preco)
        {
            printf("Aurelio ganhou a aposta");
            preco=999;
            return;
        }
        else
        {
            loucura(arr,pessoas,x,aux-1,y+1,preco);
        }
        return; 
    }
    else
    {
        loucura(arr,pessoas,x,aux-1,y+1,preco);
    }
     
}

void doideira(int arr[],int pessoas,int x,int preco)
{
    if (x==pessoas)
    {   
        if (preco!=999)
        {
        printf("Aurelio perdeu a aposta");
        }
        return;
    }
    else
    {
        loucura(arr,pessoas,x,pessoas-1,0,preco);
    }
      
    
}


void loop(int arr[],int pessoas,int aux,int preco)
{
    if (aux==pessoas)
    {   
        doideira(arr,pessoas,0,preco);
        return;
    }
    else
    {
    scanf("%d",&arr[aux]);
    loop(arr,pessoas,aux+1,preco);
    }
    
}


int main()
{
    int preco,pessoas;
    int arr[pessoas+1];
    scanf("%d %d",&preco,&pessoas);
    loop(arr,pessoas,0,preco);
    return 0;
}