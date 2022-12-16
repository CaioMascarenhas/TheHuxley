#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A,B,C;
    scanf("%lf %lf %lf", &A,&B,&C);
    printf("MEDIA = %0.1lf", ((A*2) + (B*3) + (C*5)) / 10);
	return 0;
}