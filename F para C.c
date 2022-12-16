#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double fahrenheit;
    scanf("%lf", &fahrenheit);
    printf("%0.2lf\n", ((fahrenheit -32) * 5) / 9);

	return 0;
}