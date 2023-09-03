/*
Copie y modifique el algoritmo anterior, para que además imprima el total general de ventas.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;

    double empresaY[sucursales];
    double *p = empresaY;

    double totalVentas = 0.0;
    double *pTotalVentas = &totalVentas;

    for(int s = 0; s < sucursales; s++, p++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%lf", &empresaY[s]);
        totalVentas += empresaY[s];
        printf("La sucursal numero %d tiene un ingreso total de $ %.2lf \n\n\n", s+1, *p);
    }
    printf("El total de ventas es de $ %.2lf \n\n\n", *pTotalVentas);

    return 0;
}
