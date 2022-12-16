#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int livros, alunos;
    scanf("%d %d", &livros, &alunos);
    if((alunos/livros) <=8 && (alunos/livros) >= 0)
    {
        printf("A");
    }
    else if((alunos/livros) >=9 && (alunos/livros) <=12)
    {
        printf("B");
    }
    else if((alunos/livros) >=13 && (alunos/livros) <=18)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
    
	return 0;
}