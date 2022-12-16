
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



double mediade4(double valorA,double valorG, double valorR, double valorH)
{
    double calcularMedia = ((valorA + valorG +valorH +valorR) /4);

    return calcularMedia;
}

double letra1(char letra,double valor1,double valor2,double valor3, double valor4)
{

    if(letra =='a')
    return valor1;

    else if(letra =='b')
    return valor2;

    else if(letra =='c')
    return valor3;

    else if(letra =='d')
    return valor4;
    
}
double letra2(char letraa,double valor1,double valor2,double valor3, double valor4)
{

    if(letraa =='a')
    return valor1;

    else if(letraa =='b')
    return valor2;

    else if(letraa =='c')
    return valor3;

    else if(letraa =='d')
    return valor4;
    
}
double letra3(char letrab,double valor1,double valor2,double valor3, double valor4)
{

    if(letrab =='a')
    return valor1;

    else if(letrab =='b')
    return valor2;

    else if(letrab =='c')
    return valor3;

    else if(letrab =='d')
    return valor4;
    
}
double letra4(char letrac,double valor1,double valor2,double valor3, double valor4)
{

    if(letrac =='a')
    return valor1;

    else if(letrac =='b')
    return valor2;

    else if(letrac =='c')
    return valor3;

    else if(letrac =='d')
    return valor4;
    
}

int main()
{
    double valorA,valorG,valorR,valorH;
    char letra,letraa,letrab,letrac;
    double valor1,valor2,valor3,valor4;
    double media;
    double pontfinalG,pontfinalA,pontfinalR,pontfinalH;
    double letraescolhida1,letraescolhida2,letraescolhida3,letraescolhida4;
    

    scanf("%d %d %d %d %c %c %c %c %d %d %d %d", &valorA,&valorG,&valorR,&valorH,&letra,&letraa,&letrab,&letrac,&valor1,&valor2,&valor3,&valor4);

    letraescolhida1 =letra1(letra,valor1,valor2,valor3,valor4);
    letraescolhida2 =letra2(letraa,valor1,valor2,valor3,valor4);
    letraescolhida3 =letra3(letrab,valor1,valor2,valor3,valor4);
    letraescolhida4 =letra4(letrac,valor1,valor2,valor3,valor4);

    media = mediade4(valorA,valorG,valorR,valorH);
    
    



    if (media >=0 && media <=10)
    {
        pontfinalA = valorA + letraescolhida1 +(letraescolhida1*0.4);
        pontfinalG = valorG + letraescolhida2 +(letraescolhida2*0.4);
        pontfinalR = valorR + letraescolhida3 +(letraescolhida3*0.4);
        pontfinalH = valorH + letraescolhida4 +(letraescolhida4*0.4);

        if((pontfinalA < pontfinalG) && (pontfinalA < pontfinalR) && (pontfinalA < pontfinalH))
        {
            printf("Anderson quem vai pagar o lanche!:D");
        }
        else if((pontfinalG < pontfinalA) && (pontfinalG < pontfinalH) && (pontfinalG < pontfinalR))
        {
            printf("Guilherme quem vai pagar o lanche!:D");
        }
        else if((pontfinalH < pontfinalA) && (pontfinalH < pontfinalG) && (pontfinalH < pontfinalR))
        {
            printf("Higor quem vai pagar o lanche!:D");
        }
        else if((pontfinalR< pontfinalA) && (pontfinalR < pontfinalG) && pontfinalR < pontfinalH)
        {
            printf("Rita quem vai pagar o lanche!:D");
        }
    }

    if (media >10 && media <=30)
    {
        pontfinalA = valorA + letraescolhida1 +(letraescolhida1*0.6);
        pontfinalG = valorG + letraescolhida2 +(letraescolhida2*0.6);
        pontfinalR = valorR + letraescolhida3 +(letraescolhida3*0.6);
        pontfinalH = valorH + letraescolhida4 +(letraescolhida4*0.6);

        if((pontfinalA < pontfinalG) && (pontfinalA < pontfinalR) && (pontfinalA < pontfinalH))
        {
            printf("Anderson quem vai pagar o lanche!:D");
        }
        else if((pontfinalG < pontfinalA) && (pontfinalG < pontfinalH) && (pontfinalG < pontfinalR))
        {
            printf("Guilherme quem vai pagar o lanche!:D");
        }
        else if((pontfinalH < pontfinalA) && (pontfinalH < pontfinalG) && (pontfinalH < pontfinalR))
        {
            printf("Higor quem vai pagar o lanche!:D");
        }
        else if((pontfinalR< pontfinalA) && (pontfinalR < pontfinalG) && pontfinalR < pontfinalH)
        {
            printf("Rita quem vai pagar o lanche!:D");
        }
    }
    if (media >30 && media <=60)
    {
        pontfinalA = valorA + letraescolhida1 +(letraescolhida1*0.8);
        pontfinalG = valorG + letraescolhida2 +(letraescolhida2*0.8);
        pontfinalR = valorR + letraescolhida3 +(letraescolhida3*0.8);
        pontfinalH = valorH + letraescolhida4 +(letraescolhida4*0.8);

        if((pontfinalA < pontfinalG) && (pontfinalA < pontfinalR) && (pontfinalA < pontfinalH))
        {
            printf("Anderson quem vai pagar o lanche!:D");
        }
        else if((pontfinalG < pontfinalA) && (pontfinalG < pontfinalH) && (pontfinalG < pontfinalR))
        {
            printf("Guilherme quem vai pagar o lanche!:D");
        }
        else if((pontfinalH < pontfinalA) && (pontfinalH < pontfinalG) && (pontfinalH < pontfinalR))
        {
            printf("Higor quem vai pagar o lanche!:D");
        }
        else if((pontfinalR< pontfinalA) && (pontfinalR < pontfinalG) && pontfinalR < pontfinalH)
        {
            printf("Rita quem vai pagar o lanche!:D");
        }
    }
    if (media >60)
    {
        
        pontfinalA = valorA + letraescolhida1 +(letraescolhida1*1);
        pontfinalG = valorG + letraescolhida2 +(letraescolhida2*1);
        pontfinalR = valorR + letraescolhida3 +(letraescolhida3*1);
        pontfinalH = valorH + letraescolhida4 +(letraescolhida4*1);

        if((pontfinalA < pontfinalG) && (pontfinalA < pontfinalR) && (pontfinalA < pontfinalH))
        {
            printf("Anderson quem vai pagar o lanche!:D");
        }
        else if((pontfinalG < pontfinalA) && (pontfinalG < pontfinalH) && (pontfinalG < pontfinalR))
        {
            printf("Guilherme quem vai pagar o lanche!:D");
        }
        else if((pontfinalH < pontfinalA) && (pontfinalH < pontfinalG) && (pontfinalH < pontfinalR))
        {
            printf("Higor quem vai pagar o lanche!:D");
        }
        else if((pontfinalR< pontfinalA) && (pontfinalR < pontfinalG) && pontfinalR < pontfinalH)
        {
            printf("Rita quem vai pagar o lanche!:D");
        }
    }

    return 0;
}