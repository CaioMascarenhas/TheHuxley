#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 void scan(int n, int matriz[][n])
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    return;
}
int main()
{
    int n, z, k, x, y;
    scanf("%d", &n);
    int matriz[n][n];   
    scan(n, matriz);
    scanf("%d %d", &z, &k);
    matriz[z][k] = 0;
    scanf("%d %d", &x, &y);
    matriz[x][y] = 0;
    int kills_a = 0, kills_n = 0;
    // AZULZINHA COMECA ATIRANDO
    if (matriz[z-1][k-1]==1)
    {
        kills_a++;
        matriz[z-1][k-1]=0;
    }

    if (matriz[z-1][k+1]==1)
    {
        kills_a++;
        matriz[z-1][k+1]=0;
    }

    if (matriz[z+1][k-1]==1)
    {
        kills_a++;
        matriz[z+1][k-1]=0;
    }

    if (matriz[z+1][k+1]==1)
    {
        kills_a++;
        matriz[z+1][k+1]=0;
    }
    // LARANJINHA EM SEGUIDA
    if (matriz[x-1][y]==1)
    {
        kills_n++;
        matriz[x-1][y]=0;
    }

    if (matriz[x][y-1]==1)
    {
        kills_n++;
        matriz[x][y-1]=0;
    }

    if (matriz[x+1][y]==1)
    {
        kills_n++;
        matriz[x+1][y]=0;
    }

    if (matriz[x][y+1]==1)
    {
        kills_n++;
        matriz[x][y+1]=0;
    }
    printf("aziul matou %d\n",kills_a); 
    printf("nosredna matou %d\n", kills_n);
    return 0;
}         