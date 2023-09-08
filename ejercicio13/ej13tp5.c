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
    float totalGeneral = 0.0;
    float totalZona = 0.0;
    float totalSucursales = 0.0;

        for(int z = 0; z < zona; z++) {  
            totalZona = 0.0;  
        for(int s = 0; s < sucursales; s++) {
            totalSucursales = 0.0;
            for(int v = 0; v < vendedores; v++) {
                printf("Ingrese el total de ventas de la zona %d sucursal %d, y el vendedor %d \n", z+1, s+1, v+1);
                scanf("%lf", &empresaY[z][s][v]);
                totalGeneral += empresaY[z][s][v];
                totalSucursales += empresaY[z][s][v];
                totalZona += empresaY[z][s][v];
            }
        }
    }

    for(int j = 0; j < zona; j++) {
        for(int k = 0; k < sucursales; k++) {
            for(int l = 0; l < vendedores; l++) {
                printf("La zona %d, sucursal numero %d, del vendedor %d tiene un ingreso total de $ %.2f \n\n\n", j+1, k+1, l+1, empresaY[j][k][l]);
            }
            printf("EL TOTAL DE ZONA %d LA SUCURSAL %d ES DE %.2f \n\n\n", j+1, k+1, totalSucursales);
        }
        printf("EL TOTAL DE LA ZONA %d ES DE %.2f \n\n\n", j+1, totalZona);
    }

    printf("EL TOTAL VENDIDO DE TODOS LOS VENDEDORES DE TODAS LAS SUCURSALES ES DE $ %.2f \n", totalGeneral);

    return 0;
}

