/*
Copie y modifique el algoritmo anterior, para que además imprima el total general de ventas.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    int s;
    int t;
    double empresaY[sucursales];
    double *p = &empresaY[0];
    double totalVentas = 0.0;

    for(s = 0; s < sucursales; s++, p++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%lf", p);
        totalVentas += *p;
    }
    printf("\n");


    for(t = 0; t < sucursales; t++) {
        printf("La sucursal numero %d tiene un ingreso total de $ %.1lf \n", t+1, empresaY[t]);
    }
    printf("El total de ventas es de $ %.2lf \n\n\n", totalVentas);

    return 0;
}