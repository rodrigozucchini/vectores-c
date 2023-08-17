/*/ 

Copie y modifique el algoritmo anterior. Ahora la Empresa Y vende en todo el país. El país ha
sido dividido en 3 zonas, en cada zona hay 4 sucursales y en cada sucursal hay 2 vendedores.
Ingresar los totales de ventas de cada zona, de cada sucursal y cada vendedor. Utilice un
arreglo de 3 dimensiones para almacenar las ventas.

Copie y modifique el algoritmo anterior para emitir totales de ventas por sucursal, por zona y
total general.
/*/

#include <stdio.h>

int main()
{
    int sucursales;
    int vendedores;
    int zonas;
    float empresa[3][4][2];
    float ventasSucursal = 0.0;
    float ventasXZona = 0.0;

    float ventasVendedoresXSucursal[3];
    float ventasTotalesGeneral = 0.0;


    for (int zonas = 0; zonas < 3; zonas++)
    {
        ventasXZona = 0.0;
        for (int sucursales = 0; sucursales < 4; sucursales++)
        {
            ventasVendedoresXSucursal[sucursales] = 0.0;
            for (int vendedores = 0; vendedores < 2; vendedores++)
            {
                printf("Ingrese de la zona %d la cantidad de ventas de la sucursal %d y vendedor %d \n\n\n", zonas+1, sucursales+1, vendedores+1);
                ventasSucursal = 0.0;
                scanf("%f", &empresa[zonas][sucursales][vendedores]);
                ventasSucursal += empresa[zonas][sucursales][vendedores];
                ventasTotalesGeneral += empresa[zonas][sucursales][vendedores];
                ventasXZona += empresa[zonas][sucursales][vendedores];
                ventasVendedoresXSucursal[sucursales] += empresa[zonas][sucursales][vendedores];
                printf("De la zona %d La sucursal numero %d del vendedor %d pudo vender $ %.2f \n\n", zonas+1, sucursales+1, vendedores+1, ventasSucursal);
            }
            printf("**********************************************************\n");
            printf("La venta total de la sucursal %d , es de $ %.2f \n", sucursales+1, ventasVendedoresXSucursal[sucursales]);
            printf("**********************************************************\n");
        }

        printf("**********************************************************\n");
        printf("La venta total de la zona %d , es de $ %.2f \n", zonas+1, ventasXZona);
        printf("**********************************************************\n");
    }
    printf("**********************************************************\n");
    printf("La venta total de todo es de $ %.1f\n", ventasTotalesGeneral);
    printf("**********************************************************\n");
    
    return 0;
}
