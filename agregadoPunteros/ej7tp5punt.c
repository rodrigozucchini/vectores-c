/*
La Empresa Y posee 10 sucursales. Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.

Agregando punteros
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    int s;
    int t;
    double empresaY[sucursales];
    double *p = &empresaY[0];

    for(s = 0; s < sucursales; s++, p++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%lf", p);
    }
    printf("\n");


    for(t = 0; t < sucursales; t++) {
        printf("La sucursal numero %d tiene un ingreso total de $ %.1lf \n", t+1, empresaY[t]);
    }

    return 0;
}
