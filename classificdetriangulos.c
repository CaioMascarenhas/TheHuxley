#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if( a == b && b == c)
    {
        printf("equilatero");
    }
    else if(a == b && b != c)
    {
        printf("isosceles");
    }
    else if(a == c && c != b)
    {
        printf("isosceles");
    }
    else if(b == c && c != a)
    {
        printf("isosceles");
    }
    else
    {
        printf("escaleno");
    }


	return 0;
}