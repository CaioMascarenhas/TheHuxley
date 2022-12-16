#include <stdio.h>

void sort(int size, int arr[], int i)
{
    if (size == 1) 
    {
        printf("%d\n",arr[0]);
        printf("%d",arr[5]);
        return;
    }
        

    if (i + 1 == size) 
        return sort(size - 1, arr, 0);

    if (arr[i] > arr[i + 1]) 
    {
        int aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
    }
    
    return sort(size, arr, i + 1);
}

void loopscan(int x,int arr[])
{
    if (x==-1)
    {
        sort(6,arr,0);
        return;
    }
    else
    {
        scanf("%d",&arr[x]);
        loopscan(x-1,arr);
    }
    
    
}

int main()
{
    int arr[6];

    loopscan(5,arr);

    return 0;
}