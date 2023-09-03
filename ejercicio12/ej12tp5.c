/*
Copie y modifique el algoritmo anterior para emitir totales de ventas por sucursal, por zona y
total general.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int zona = 3;
    int sucursales = 4;
    int vendedores = 2;
    double empresaY[zona][sucursales][vendedores];
    float totalZona = 0.0;
    float totalSucursales = 0.0;
    float totalGeneral = 0.0;

    for(int z = 0; z < zona; z++) 
    {
        for (int s = 0; s < sucursales; s++)
        {
            for(int v = 0; v < vendedores; v++) 
            {
                printf("Ingrese el total de ventas de la zona %d, sucursal %d y el vendedor %d \n", z+1, s+1, v+1);
                scanf("%lf", &empresaY[z][s][v]);
                printf("La zona numero %d , la sucursal numero %d ,del vendedor %d tiene un ingreso total de $ %.2f \n\n\n", z+1, s+1, v+1, empresaY[z][s][v]);
                totalSucursales += empresaY[z][s][v];
                totalZona += empresaY[z][s][v];
                totalGeneral += empresaY[z][s][v];
            }
            printf("EL TOTAL DE LA SUCURSAL %d ES DE %.2f \n\n\n", s+1, totalSucursales);
            totalSucursales = 0.0;
        }
        printf("EL TOTAL DE LA ZONA %d ES DE %.2f \n\n\n", z+1, totalZona);
        totalZona = 0.0;
    }
    printf("-------------------------------------------------\n");
    printf("EL TOTAL DE TODAS LAS VENTAS DE TODAS LAS SUCURSALES, ZONAS Y VENDEDORES ES DE $ %.2f \n\n\n", totalGeneral);
    printf("-------------------------------------------------\n");

    return 0;
}