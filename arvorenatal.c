#include <stdio.h>

void calculadora(double arr[])
{
    printf("%.2lf\n",arr[0]+(arr[1]*arr[2])+(arr[3]*arr[4])+(arr[5]*arr[6]));
    printf("%.2lf\n",(arr[0]+(arr[1]*arr[2])+(arr[3]*arr[4])+(arr[5]*arr[6]))/21);
}

void loopscan(double arr[],int x)
{
    if (x==7)
    {   
        calculadora(arr);
        return;
    }
    scanf("%lf",&arr[x]);
    loopscan(arr,x+1);
}


int main()
{

    double arr[10];
    loopscan(arr,0);

    return 0;
}