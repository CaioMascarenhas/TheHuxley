#include <stdio.h>

void sort(int size, double arr[], int i)
{
    if (size == 1) 
    {
        printf("%.2lf\n",arr[0]);
        printf("%.2lf\n",arr[2]);
        printf("%.2lf\n",arr[3]);
        printf("%.2lf\n",arr[1]);
        return;
    }
        

    if (i + 1 == size) 
        return sort(size - 1, arr, 0);

    if (arr[i] > arr[i + 1]) 
    {
        double aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
    }
    
    return sort(size, arr, i + 1);
}

int main()
{   
    double arr[10];
    scanf("%lf %lf %lf %lf",&arr[0],&arr[1],&arr[2],&arr[3]);
    sort(4,arr,0);

    return 0;
}