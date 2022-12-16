#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sexo, idade;
    scanf("%d %d", &sexo, &idade);
    // 1=homem 1=maior de 40
    if(sexo ==1 && idade ==0)
    {
        printf("0");
    }
    else if(sexo ==1 && idade ==1)
    {
        printf("0");
    }
    else if(sexo ==0 && idade ==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

   
	return 0;
}
