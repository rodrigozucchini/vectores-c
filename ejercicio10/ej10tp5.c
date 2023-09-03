/*
Copie y modifique el algoritmo anterior. El algoritmo deberá mostrar los totales por cada
sucursal (para todos sus vendedores, para ello utilice otro arreglo de 3 elementos en donde
sumarizar las ventas de todos los vendedores de cada sucursal). Por último, muestre el total
general de ventas (utilice una variable como acumulador).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int sucursales = 3;
    int vendedores = 5;
    double empresaY[sucursales][vendedores];
    double totalXSucursales[3];
    float totalGeneral = 0.0;

    for(int s = 0; s < sucursales; s++) {
        totalXSucursales[s] = 0;
        for(int v = 0; v < vendedores; v++) {
            printf("Ingrese el total de ventas de la sucursal %d, y el vendedor %d \n", s+1, v+1);
            scanf("%lf", &empresaY[s][v]);
            printf("La sucursal numero %d ,del vendedor %d tiene un ingreso total de $ %.2f \n\n\n", s+1, v+1, empresaY[s][v]);
            totalGeneral += empresaY[s][v];
            totalXSucursales[s] += empresaY[s][v];
        }
        printf("EL TOTAL DE LA SUCURSAL %d ES DE %.2f \n\n\n", s+1, totalXSucursales[s]);
    }
        printf("-------------------------------------------------\n");
        printf("EL TOTAL VENDIDO DE TODOS LOS VENDEDORES DE TODAS LAS SUCURSALES ES DE $ %.2f \n", totalGeneral);
        printf("-------------------------------------------------\n");

    return 0;
}
