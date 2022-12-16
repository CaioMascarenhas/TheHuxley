#include <stdio.h>

void sort(int size, int arr[], int i,int numturmas,int aux,int x)
{
    if (size == 1)
    {   
        printf("%d %d %d %d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
        printf("%d %d %d %d %d %d %d %d %d %d\n",arr[9],arr[8],arr[7],arr[6],arr[5],arr[4],arr[3],arr[2],arr[1],arr[0]);
        loop(arr,aux+1,numturmas,x-1);
        return;
    }
    if (i + 1 == size) 
        return sort(size - 1, arr, 0,numturmas,aux,x);

    if (arr[i] > arr[i + 1]) 
    {
        int aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
    }
    
    return sort(size, arr, i + 1,numturmas,aux,x);
}

void loop(int arr[],int aux,int numturmas,int x)
{
    if (aux==numturmas+1)
    {
        return;
    }
    else
    {   
        printf("turma %d:\n",aux);
        scanf("%d %d %d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
        sort(11,arr,0,numturmas,aux,x);
    }
    
    
}


int main()
{
    int numturmas;
    int arr[100];
    scanf("%d",&numturmas);
    loop(arr,1,numturmas,numturmas);

    return 0;
}