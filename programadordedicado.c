#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int entradas(int contadorP,int contadorL,int dias,int semana[],int x);

int calculadora(int programas, int linhas,int contadorP,int contadorL,int dias, int semana[],int x)
{
    if (programas >=5)
    {
        contadorP = contadorP+1;
    }
    if (linhas >=100)
    {
        contadorL = contadorL+1;
    }
    semana[x]=linhas;

    return entradas(contadorP,contadorL,dias+1,semana,x+1);
    
}


int entradas(int contadorP,int contadorL,int dias,int semana[],int x)
{   
    if (dias == 7)
    {   
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",contadorP);

        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n",contadorL);
        return 0;
    }
    else
    {
    int programas,linhas;
    scanf("%d %d",&programas,&linhas);
    return calculadora(programas,linhas,contadorP,contadorL,dias,semana,x);
    }

}

int main()
{
    int programas,linhas,dias,x;
    int contadorP,contadorL;
    int semana[7];

    entradas(0,0,0,semana,0);


    if (semana[0] > semana[1] && semana[0]> semana [2] && semana [0]> semana[3] && semana[0]> semana[4] && semana [0]> semana[5] && semana [0] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO");
    }

    else if (semana[1] >= semana[0] && semana[1]> semana [2] && semana [1]> semana[3] && semana[1]> semana[4] && semana [1] > semana[5] && semana [1] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
    }

    else if (semana[2] >= semana[0] && semana[2]>= semana [1] && semana [2]> semana[3] && semana[2]> semana[4] && semana [2] > semana[5] && semana [2] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: TERCA");
    }

    else if (semana[3] >= semana[0] && semana[3]>= semana [1] && semana [3]>= semana[2] && semana[3]> semana[4] && semana [3] > semana[5] && semana [3] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: QUARTA");
    }

    else if (semana[4] >= semana[0] && semana[4]>= semana [1] && semana [4]>= semana[2] && semana[4]>= semana[3] && semana [4] > semana[5] && semana [4] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: QUINTA");
    }

    else if (semana[5] >= semana[0] && semana[5]>= semana [1] && semana [5]>= semana[2] && semana[5]>= semana[3] && semana [5] >= semana[4] && semana [5] > semana [6])
    {
        printf("DIA QUE MAIS PRODUZIU: SEXTA");
    }

    else if (semana[6] >= semana[0] && semana[6]>= semana [1] && semana [6]>= semana[2] && semana[6]>= semana[3] && semana [6] >= semana[4] && semana [6] >= semana [5])
    {
        printf("DIA QUE MAIS PRODUZIU: SABADO");
    }
    

    return 0; 
}