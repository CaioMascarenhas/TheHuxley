#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  double a,c,b;
  scanf("%lf %lf %lf", &a,&b,&c);
  double media = (a+b+c) / 3;
  if(media >=70){
    printf("A media do aluno foi %.2lf e ele foi APROVADO", media);
  }
  else if(media >=40 && media <70){
    printf("A media do aluno foi %.2lf e ele foi FINAL", media);
  }
  else if(media <40 && media >=0)
    {
    printf("A media do aluno foi %.2lf e ele foi REPROVADO", media);
  }
  else{
    printf("Media invalida");
  }
	return 0;
}