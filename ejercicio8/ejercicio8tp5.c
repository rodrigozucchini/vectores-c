/*/ 
La Empresa Y posee 10 sucursales. 
Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.


Copie y modifique el algoritmo anterior, 
para que además imprima el total general de ventas.
/*/

#include <stdio.h>

int main()
{
    int sucursales = 10;
    int empresa[sucursales];
    float ventasSucursal = 0.0;
    float ventasTotal = 0.0;

    for (int i = 1; i <= sucursales; i++)
    {
        printf("Ingrese la cantidad de ventas de la sucursal %d \n", i);
        scanf("%f", &ventasSucursal);
        ventasTotal += ventasSucursal;
        printf("La sucursal numero %d pudo vender %.2f \n", i, ventasSucursal);
    }
    printf("La venta total de todas las sucursales son de  %.2f \n", ventasTotal);
}