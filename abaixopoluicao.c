#include <stdio.h>

void multa(double valormulta,int casasmultadas)
{
    int quantidadecarros;
    scanf("%d",&quantidadecarros);
    if (quantidadecarros==999)
    {
        printf("%.2lf\n%d",valormulta,casasmultadas);
        return;
    }
    if (quantidadecarros>2)
    {
        valormulta=valormulta+((quantidadecarros-2)*12.89);
        casasmultadas++;
        multa(valormulta,casasmultadas);
    }

    else
    {
        multa(valormulta,casasmultadas);
    }
    
}


int main()
{
    multa(0,0);

    return 0;
}