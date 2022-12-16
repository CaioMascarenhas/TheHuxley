#include <stdio.h>
#include <math.h>


int main()
{
    int estiloprimario, estilosecundario, fatormusical;

    scanf ("%d %d %d", &estiloprimario,&estilosecundario,&fatormusical);

    //1=eletronic 2=indie 3=rock   // 1=hard 2=amistoso

    if(estiloprimario == 1 && estilosecundario ==1)
    {
        printf("Aumenta mais!\n");
    }
    
    else if(estiloprimario ==1 && estilosecundario ==2)
    {
        printf("Legal\n");
    }

    else if(estiloprimario == 2 && estilosecundario ==1)
    {
        printf("Essa eh punk\n");
    }

    else if(estiloprimario == 2 && estilosecundario==2)
    {
        printf("Hoje eu choro\n");
    }

    else if (estiloprimario==3 && estilosecundario==1)
    {
        printf("Aumenta mais!\n");
    }

    else if (estiloprimario==3 && estilosecundario==2)
    {
        printf("Legal\n");
    }

    if(fatormusical >=1 && fatormusical <=4)
    {
        printf(":'(");
    }
    else if(fatormusical >4 && fatormusical <=7)
    {
        printf("^_^");
    }
    else if (fatormusical >7 && fatormusical <=10)
    {
        printf("=D");
    }


    return 0;
}

