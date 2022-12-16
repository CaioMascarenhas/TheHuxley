#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double area;
    scanf("%lf", &area);
    printf("Area = %0.4lf",  3.14159 * area * area * 0.01 * 0.01);
	return 0;
}