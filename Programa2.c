// PAULO A DELGADO CALDERON XVI-X-MMXXV

#include <stdio.h>

int main()
    {
        /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
        El siguiente es un ciclo infinito porque la condición siempre es verdadera.
        Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
        opcionales.*/
        
    int cont = 0

    while (cont <= 10)
    {
        printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
        cont = cont + 1;
    }
    return 0;
    }
