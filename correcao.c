#include <string.h>
#include <stdio.h>

int funciona(char gabarito[],int contador,int aluno,double porcentagem,double quantidade,int famosa[])
{
    char prova[100];
    gets(prova);
    if (prova[0]==gabarito[0])
    {
        contador++;
    }
    if (prova[1]==gabarito[1])
    {
        contador++;
    }
    if (prova[2]==gabarito[2])
    {
        contador++;
    }
    if (prova[3]==gabarito[3])
    {
        contador++;
    }
    if (prova[4]==gabarito[4])
    {
        contador++;
    }
    if (prova[5]==gabarito[5])
    {
        contador++;
    }
    if (prova[6]==gabarito[6])
    {
        contador++;
    }
    if (prova[7]==gabarito[7])
    {
        contador++;
    }
    if (prova[8]==gabarito[8])
    {
        contador++;
    }
    if (prova[9]==gabarito[9])
    {
        contador++;
    }
    if (contador>=6)
    {
        porcentagem++;
    }
    if (contador==0)
    {
        famosa[0]++;
    }
    if (contador==1)
    {
        famosa[1]++;
    }
    if (contador==2)
    {
        famosa[2]++;
    }
    if (contador==3)
    {
        famosa[3]++;
    }
    if (contador==4)
    {
        famosa[4]++;
    }
    if (contador==5)
    {
        famosa[5]++;
    }
    if (contador==6)
    {
        famosa[6]++;
    }
    if (contador==7)
    {
        famosa[7]++;
    }
    if (contador==8)
    {
        famosa[8]++;
    }
    if (contador==9)
    {
        famosa[9]++;
    }
    if (contador==10)
    {
        famosa[10]++;
    }
    
    printf("%d %d.0\n",aluno,contador);
    return funcao(gabarito,0,porcentagem,quantidade,famosa);

}

int funcao(char gabarito[],int aluno,double porcentagem,double quantidade,int famosa[])
{   
    scanf("%d ",&aluno);
    if (aluno==9999)
    {   
        //printf("%lf %lf\n",quantidade,porcentagem);
        printf("%.1lf%%\n",(porcentagem/quantidade)*100);
        if (famosa[0]>famosa[1] && famosa[0]> famosa[2] && famosa[0]> famosa[3] && famosa[0]>famosa[4] && famosa[0]>famosa[5] && famosa[0]>famosa[6] && famosa[0]>famosa[7] && famosa[0]>famosa[8] && famosa[0]>famosa[9] && famosa[0]>famosa[10]) 
        {
            printf("0.0");
        }
        if (famosa[1]>=famosa[0] && famosa[1]>famosa[2] && famosa[1]> famosa[3] && famosa[1]> famosa[4] && famosa[1]>famosa[5] && famosa[1]>famosa[6] && famosa[1]>famosa[7] && famosa[1]>famosa[8] && famosa[1]>famosa[9] && famosa[1]>famosa[10])
        {
            printf("1.0");
        }
        if (famosa[2]>=famosa[0] && famosa[2]>=famosa[1] && famosa[2]> famosa[3] && famosa[2]> famosa[4] && famosa[2]>famosa[5] && famosa[2]>famosa[6] && famosa[2]>famosa[7] && famosa[2]>famosa[8] && famosa[2]>famosa[9] && famosa[2]>famosa[10])
        {
            printf("2.0");
        }
        if (famosa[3]>=famosa[0] && famosa[3]>=famosa[1] && famosa[3]>= famosa[2] && famosa[3]> famosa[4] && famosa[3]>famosa[5] && famosa[3]>famosa[6] && famosa[3]>famosa[7] && famosa[3]>famosa[8] && famosa[3]>famosa[9] && famosa[3]>famosa[10])
        {
            printf("3.0");
        }
        if (famosa[4]>=famosa[0] && famosa[4]>=famosa[1] && famosa[4]>= famosa[2] && famosa[4]>= famosa[3] && famosa[4]>famosa[5] && famosa[4]>famosa[6] && famosa[4]>famosa[7] && famosa[4]>famosa[8] && famosa[4]>famosa[9] && famosa[4]>famosa[10])
        {
            printf("4.0");
        }
        if (famosa[5]>=famosa[0] && famosa[5]>=famosa[1] && famosa[5]>= famosa[2] && famosa[5]>= famosa[3] && famosa[5]>=famosa[4] && famosa[5]>famosa[6] && famosa[5]>famosa[7] && famosa[5]>famosa[8] && famosa[5]>famosa[9] && famosa[5]>famosa[10])
        {
            printf("5.0");
        }
        if (famosa[6]>=famosa[0] && famosa[6]>=famosa[1] && famosa[6]>= famosa[2] && famosa[6]>= famosa[3] && famosa[6]>=famosa[4] && famosa[6]>=famosa[5] && famosa[6]>famosa[7] && famosa[6]>famosa[8] && famosa[6]>famosa[9] && famosa[6]>famosa[10])
        {
            printf("6.0");
        }
        if (famosa[7]>=famosa[0] && famosa[7]>=famosa[1] && famosa[7]>= famosa[2] && famosa[7]>= famosa[3] && famosa[7]>=famosa[4] && famosa[7]>=famosa[5] && famosa[7]>=famosa[6] && famosa[7]>famosa[8] && famosa[7]>famosa[9] && famosa[7]>famosa[10])
        {
            printf("7.0");
        }
        if (famosa[8]>=famosa[0] && famosa[8]>=famosa[1] && famosa[8]>= famosa[2] && famosa[8]>= famosa[3] && famosa[8]>=famosa[4] && famosa[8]>=famosa[5] && famosa[8]>=famosa[6] && famosa[8]>=famosa[7] && famosa[8]>famosa[9] && famosa[8]>famosa[10])
        {
            printf("8.0");
        }
        if (famosa[9]>=famosa[0] && famosa[9]>=famosa[1] && famosa[9]>= famosa[2] && famosa[9]>= famosa[3] && famosa[9]>=famosa[4] && famosa[9]>=famosa[5] && famosa[9]>=famosa[6] && famosa[9]>=famosa[7] && famosa[9]>=famosa[8] && famosa[9]>famosa[10])
        {
            printf("9.0");
        }
        if (famosa[10]>=famosa[0] && famosa[10]>=famosa[1] && famosa[10]>= famosa[2] && famosa[10]>= famosa[3] && famosa[10]>=famosa[4] && famosa[10]>=famosa[5] && famosa[10]>=famosa[6] && famosa[10]>=famosa[7] && famosa[10]>=famosa[8] && famosa[10]>=famosa[9])
        {
            printf("10.0");
        }
        
        return 0;
    }
    else
    {
        funciona(gabarito,0,aluno,porcentagem,quantidade+1,famosa);
    }
}

int main()
{   
    int famosa[200];
    famosa[0]=0;
    famosa[1]=0;
    famosa[2]=0;
    famosa[3]=0;
    famosa[4]=0;
    famosa[5]=0;
    famosa[6]=0;
    famosa[7]=0;
    famosa[8]=0;
    famosa[9]=0;
    famosa[10]=0;
    char gabarito[200];
    gets(gabarito);
    funcao(gabarito,0,0,0,famosa);

    return 0;
}