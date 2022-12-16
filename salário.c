#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero, horastrab;
    double valorph;
    scanf("%d %d %lf", &numero, &horastrab, &valorph);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = R$ %0.2lf", valorph * horastrab);
   
	return 0;
}