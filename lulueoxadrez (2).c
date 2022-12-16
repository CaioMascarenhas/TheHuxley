#include <stdio.h>
#include <string.h>



int main()
{
    char linha0[30];
    char linha1[30];
    char linha2[30];
    char linha3[30];
    char linha4[30];
    char linha5[30];
    char linha6[30];
    char linha7[30];
    int contadorBRANCAS=0;
    int contadorPRETAS=0;

    gets(linha0);
    gets(linha1);
    gets(linha2);
    gets(linha3);
    gets(linha4);
    gets(linha5);
    gets(linha6);
    gets(linha7);

    
    for (int i = 0; i < strlen(linha0); i++)
    {
        if (linha0[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha0[i]=='t' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha0[i]=='d' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha0[i]=='r' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha0[i]=='c' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha0[i]=='b' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha0[i]=='p' && linha0[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
    for (int i = 0; i < strlen(linha1); i++)
    {
        if (linha1[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha1[i]=='t' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha1[i]=='d' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha1[i]=='r' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha1[i]=='c' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha1[i]=='b' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha1[i]=='p' && linha1[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha2); i++)
    {
        if (linha2[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha2[i]=='t' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha2[i]=='d' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha2[i]=='r' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha2[i]=='c' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha2[i]=='b' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha2[i]=='p' && linha2[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha3); i++)
    {
        if (linha3[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha3[i]=='t' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha3[i]=='d' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha3[i]=='r' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha3[i]=='c' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha3[i]=='b' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha3[i]=='p' && linha3[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha4); i++)
    {
        if (linha4[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha4[i]=='t' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha4[i]=='d' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha4[i]=='r' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha4[i]=='c' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha4[i]=='b' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha4[i]=='p' && linha4[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha5); i++)
    {
        if (linha5[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha5[i]=='t' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha5[i]=='d' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha5[i]=='r' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha5[i]=='c' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha5[i]=='b' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha5[i]=='p' && linha5[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha6); i++)
    {
        if (linha6[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha6[i]=='t' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha6[i]=='d' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha6[i]=='r' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha6[i]=='c' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha6[i]=='b' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha6[i]=='p' && linha6[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha7); i++)
    {
        if (linha7[i]=='L')
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        else if (linha7[i]=='t' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+8;
        }
        else if (linha7[i]=='d' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+9;
        }
        else if (linha7[i]=='r' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+0;
        }
        else if (linha7[i]=='c' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha7[i]=='b' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+3;
        }
        else if (linha7[i]=='p' && linha7[i+1]=='b')
        {
            contadorBRANCAS=contadorBRANCAS+1;
        }
        else
        {
            contadorBRANCAS=contadorBRANCAS;
        }
        
        
    }

        for (int i = 0; i < strlen(linha0); i++)
    {
        if (linha0[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha0[i]=='t' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha0[i]=='d' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha0[i]=='r' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha0[i]=='c' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha0[i]=='b' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha0[i]=='p' && linha0[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
    for (int i = 0; i < strlen(linha1); i++)
    {
        if (linha1[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha1[i]=='t' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha1[i]=='d' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha1[i]=='r' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha1[i]=='c' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha1[i]=='b' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha1[i]=='p' && linha1[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha2); i++)
    {
        if (linha2[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha2[i]=='t' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha2[i]=='d' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha2[i]=='r' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha2[i]=='c' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha2[i]=='b' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha2[i]=='p' && linha2[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha3); i++)
    {
        if (linha3[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha3[i]=='t' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha3[i]=='d' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha3[i]=='r' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha3[i]=='c' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha3[i]=='b' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha3[i]=='p' && linha3[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha4); i++)
    {
        if (linha4[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha4[i]=='t' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha4[i]=='d' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha4[i]=='r' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha4[i]=='c' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha4[i]=='b' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha4[i]=='p' && linha4[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha5); i++)
    {
        if (linha5[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha5[i]=='t' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha5[i]=='d' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha5[i]=='r' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha5[i]=='c' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha5[i]=='b' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha5[i]=='p' && linha5[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha6); i++)
    {
        if (linha6[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha6[i]=='t' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha6[i]=='d' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha6[i]=='r' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha6[i]=='c' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha6[i]=='b' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha6[i]=='p' && linha6[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }
        for (int i = 0; i < strlen(linha7); i++)
    {
        if (linha7[i]=='L')
        {
            contadorPRETAS=contadorPRETAS;
        }
        else if (linha7[i]=='t' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+8;
        }
        else if (linha7[i]=='d' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+9;
        }
        else if (linha7[i]=='r' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+0;
        }
        else if (linha7[i]=='c' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha7[i]=='b' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+3;
        }
        else if (linha7[i]=='p' && linha7[i+1]=='p')
        {
            contadorPRETAS=contadorPRETAS+1;
        }
        else
        {
            contadorPRETAS=contadorPRETAS;
        }
        
        
    }

    if (contadorBRANCAS>contadorPRETAS)
    {
        printf("Brancas");
    }
    else if (contadorBRANCAS<contadorPRETAS)
    {
        printf("Negras");
    }
    else if(contadorBRANCAS==contadorPRETAS)
    {
        printf("Empate");
    }
    
    

    return 0;
}