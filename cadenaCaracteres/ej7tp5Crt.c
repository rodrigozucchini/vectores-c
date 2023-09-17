/*
La Empresa Y posee 10 sucursales. Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.

Modifique los ejercicios 7 a 13 para inicializar los arreglos con ceros binarios usando la función memset().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    int s;
    int t;
    double empresaY[sucursales];

    memset(empresaY, 0, sizeof(double) * sucursales);

    for(s = 0; s < sucursales; s++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%d", &empresaY[s]);
    }
    printf("\n");
    
    for(t = 0; t < sucursales; t++) {
        printf("La sucursal numero %d tiene un ingreso total de $ %d \n", t+1, empresaY[t]);
    }


    return 0;
}
