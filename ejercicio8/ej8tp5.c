/*
Copie y modifique el algoritmo anterior, para que además imprima el total general de ventas.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 10;
    int s;
    int t;
    double empresaY[sucursales], totalVentas = 0.0;

    for(s = 0; s < sucursales; s++) {
        printf("Ingrese el total de ventas de la sucursal numero %d \n", s+1);
        scanf("%lf", &empresaY[s]);
        totalVentas += empresaY[s];
    }
    printf("\n");
    for(t = 0; t < sucursales; t++) {
        printf("La sucursal numero %d tiene un ingreso total de $ %.2f \n", t+1, empresaY[t]);
    }
    printf("El total de ventas de todas las sucursales es de $ %.2f \n", totalVentas);

    return 0;
}