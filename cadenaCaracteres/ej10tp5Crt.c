/*
Copie y modifique el algoritmo anterior. El algoritmo deberá mostrar los totales por cada
sucursal (para todos sus vendedores, para ello utilice otro arreglo de 3 elementos en donde
sumarizar las ventas de todos los vendedores de cada sucursal). Por último, muestre el total
general de ventas (utilice una variable como acumulador).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    int sucursales = 3;
    int vendedores = 5;
    double empresaY[sucursales][vendedores];
    double totalXSucursales[3];
    float totalGeneral = 0.0;

    size_t tamanioEmpresa = sucursales * vendedores;

    memset(empresaY, 0, sizeof(double) * tamanioEmpresa);
    memset(totalXSucursales, 0, sizeof(double) * 3);

    for(int s = 0; s < sucursales; s++) {
        totalXSucursales[s] = 0;
        for(int v = 0; v < vendedores; v++) {
            printf("Ingrese el total de ventas de la sucursal %d, y el vendedor %d \n", s+1, v+1);
            scanf("%lf", &empresaY[s][v]);
            totalGeneral += empresaY[s][v];
            totalXSucursales[s] += empresaY[s][v];
        }
    }

    for(int j = 0; j < sucursales; j++) {
        for(int k = 0; k < vendedores; k++) {
            printf("%d", empresaY[j][k]);
            printf("La sucursal numero %d ,del vendedor %d tiene un ingreso total de $ %.2f \n\n\n", j+1, k+1, empresaY[j][k]);
        }
        printf("%d", totalXSucursales[j]);
        printf("EL TOTAL DE LA SUCURSAL %d ES DE %.2f \n\n\n", j+1, totalXSucursales[j]);
    }

    printf("EL TOTAL VENDIDO DE TODOS LOS VENDEDORES DE TODAS LAS SUCURSALES ES DE $ %.2f \n", totalGeneral);

    return 0;
}