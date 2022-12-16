#include <stdio.h>
int repeticao (int n, int x, int y, int localizacao, char movimento, int contador);

int main ()
{
    int passos,localizacao;
    int x,y;
    x=0;
    y=0;
    char movimento;

    scanf ("%d %c", &passos, &movimento);

    if (movimento =='D')
    {
        localizacao =1;
        x=x+1;
    }
    else if (movimento =='C')
    {
        localizacao =-1;
        y=y+1;
    }

    repeticao(localizacao-1,x,y,localizacao,movimento,0);
    return 0;
}

int repeticao (int n, int x, int y, int localizacao, char movimento, int contador)
{
    char direcao;
    if(n ==0)
    {
        printf ("%d\n", contador);
        return 0;
    }
    else 
    {
        scanf (" %c", &direcao);
    }

    if (direcao =='D')
    {
        x=x+1;
    }
    else if (direcao =='C')
    {
        y=y+1;
    }    
    
    if (localizacao == 1 && y > x)
    {
        contador =contador+1;
        localizacao =-1;
    }
    else if (localizacao == -1 && x > y) 
    {
        contador=contador+1;
        localizacao =1;
    }

    repeticao (n - 1, x, y, localizacao, movimento, contador);

}