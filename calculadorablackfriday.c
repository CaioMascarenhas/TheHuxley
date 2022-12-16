#include <stdio.h>

void checadesconto(double arr[],int aux)
{   
    if (arr[0]*0.8>=arr[1])
    {
        aux++;
    }
    if (arr[2]*0.8>=arr[3])
    {
        aux++;
    }
    if (arr[4]*0.8>=arr[5])
    {
        aux++;
    }
    if (arr[6]*0.8>=arr[7])
    {
        aux++;
    }
    if (arr[8]*0.8>=arr[9])
    {
        aux++;
    }
    printf("%d",aux);
    
}

void loop(double arr[],int aux)
{   
    if (aux==10)
    {   
        checadesconto(arr,0);
        return;
    }
    scanf("%lf",&arr[aux]);
    loop(arr,aux+1);

}


int main()
{
    double arr[11];
    loop(arr,0);

}