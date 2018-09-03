/*
 * Este programa nos ayudará a calcular la serie Fibonnaci
 * de una N cantidad de números.
 *
 * Autor: Óscar Rubén Gómez Ríos
 * Fecha: 04 de Septiembre de 2018
 * Correo: A01411750@itesm.mx
 *
 */
#include <stdio.h>
int main()
{
    int i, n, n1 = 0, n2 = 1, nextTerm;

    printf("Give me the Numbers: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    return 0;
}

