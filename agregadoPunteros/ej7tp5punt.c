/*
La Empresa Y posee 10 sucursales. Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.

Agregando punteros
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    double empresaY[sucursales];
    double *p = empresaY;

    for(int s = 0; s < sucursales; s++, p++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%lf", &empresaY[s]);
        printf("La sucursal numero %d tiene un ingreso total de $ %.2lf \n\n\n", s+1, *p);
    }

    return 0;
}