/*/ 
Copie y modifique el algoritmo anterior. 
El algoritmo deberá mostrar los totales por cada sucursal 
(para todos sus vendedores, 
para ello utilice otro arreglo de 3 elementos en donde
sumarizar las ventas de todos los vendedores de cada sucursal). 
Por último, muestre el total
general de ventas (utilice una variable como acumulador).
/*/

#include <stdio.h>

int main()
{
    int sucursales;
    int vendedores;
    float empresa[3][5];
    float ventasSucursal = 0.0;

    float ventasVendedoresXSucursal[3];
    float ventasTotalesGeneral = 0.0;

    for (int sucursales = 0; sucursales < 3; sucursales++)
    {
        ventasVendedoresXSucursal[sucursales] = 0.0;
        for (int vendedores = 0; vendedores < 5; vendedores++)
        {
            printf("Ingrese la cantidad de ventas de la sucursal %d y vendedor %d \n", sucursales+1, vendedores+1);
            ventasSucursal = 0.0;
            scanf("%f", &empresa[sucursales][vendedores]);
            ventasSucursal += empresa[sucursales][vendedores];
            ventasTotalesGeneral += empresa[sucursales][vendedores];
            ventasVendedoresXSucursal[sucursales] += empresa[sucursales][vendedores];
            printf("La sucursal numero %d del vendedor %d pudo vender $ %.2f \n", sucursales+1, vendedores+1, ventasSucursal);
        }
        printf("La venta total de la sucursal %d , es de $ %.2f \n", sucursales+1, ventasVendedoresXSucursal[sucursales]);
    }
    printf("La venta total de todo es de $ %.1f", ventasTotalesGeneral);
    return 0;
}
