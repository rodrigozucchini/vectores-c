/*
Copie y modifique el algoritmo anterior, para hacerlo más flexible, ahora es el usuario del
programa quien indica cuántas zonas hay, cuántas sucursales por zona y cuántos vendedores
por sucursal. Ingresar estos datos, validarlos. Ingresar las ventas que correspondan y emitir
los totales por sucursal, por zona y general.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int vendedores = 0;
    int sucursales = 0;
    int zona = 0;

    printf("Ingrese la cantidad de vendedores que tiene tu programa ");
    scanf("%d", &vendedores);

    printf("Ingrese la cantidad de sucursales que tiene tu programa ");
    scanf("%d", &sucursales);

    printf("Ingrese la cantidad de zonas que tiene tu programa ");
    scanf("%d", &zona);



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