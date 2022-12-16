#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int cod, quantidade;
   scanf("%d %d", &cod, &quantidade);
   double preco;
   if(cod == 1){
    preco = 5.30;
   }
    else if(cod == 2){
        preco = 6.00;
    } 
    else if(cod == 3){
        preco = 3.20;
    }
    else if(cod == 4){
        preco = 2.50;
    }
    double saida;
    saida = preco*quantidade;
    if(quantidade >= 15 || saida >= 40){
        printf("R$ %0.2lf", preco*quantidade*0.85);
    }
    else {
        printf("R$ %0.2lf", preco*quantidade);
    }

	return 0;
}