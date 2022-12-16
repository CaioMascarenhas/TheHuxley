#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int level;
    scanf("%d", &level);
    if(level >=1 && level<=20)
    {
        printf("Potencia de : %d W", 20 + level*level*level);
    }
    else if(level >=21 && level<=40)
    {
        printf("Potencia de : %d W", 8000 + (level -10)*(level-10));
    }
    else if(level >=41 && level<=60)
    {
        printf("Potencia de : %d W", 9000 + 5*level);
    }
    else if (level >=61 && level<=80)
    {
        printf("Potencia de : %d W", 9300 + 2*level);
    }
    else if(level >=81 && level<=100)
    {
        printf("Potencia de : %d W", 9500 + level);
    }
    else
    {
        printf("Level invalido");
    }
	return 0;
}