/*/ 
La Empresa Y posee 10 sucursales. 
Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.


Copie y modifique el algoritmo anterior, 
para que además imprima el total general de ventas.

Copie y modifique el algoritmo anterior. 
Ahora la Empresa Y tiene 3 sucursales y 5 vendedores en cada sucursal. 
Ingrese por teclado las ventas totales diarias de cada vendedor en cada sucursal 
(utilice para ello un arreglo bidimensional de 3 filas por 5 columnas).
/*/

#include <stdio.h>

int main()
{
    int sucursales = 1;
    int vendedores = 1;
    float empresa[3][5];
    float ventasSucursal = 0.0;

    for (int sucursales = 1; sucursales <= 3; sucursales++)
    {
        empresa[sucursales][vendedores] = 0.0;
        for (int vendedores = 1; vendedores <= 5; vendedores++)
        {
            printf("Ingrese la cantidad de ventas de la sucursal %d y vendedor %d \n", sucursales, vendedores);
            scanf("%f", &empresa[sucursales][vendedores]);
            ventasSucursal += empresa[sucursales][vendedores];
            printf("El vendedor numero %d , de la sucursal numero %d pudo vender $ %.2f \n", vendedores, sucursales, ventasSucursal);
        }

    }
}

