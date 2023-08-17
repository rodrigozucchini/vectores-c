/*/ 
Copie y modifique el algoritmo anterior, para hacerlo más flexible, ahora es el usuario del
programa quien indica cuántas zonas hay, cuántas sucursales por zona y cuántos vendedores
por sucursal. Ingresar estos datos, validarlos. Ingresar las ventas que correspondan y emitir
los totales por sucursal, por zona y general.
/*/

#include <stdio.h>

int main()
{

    int sucursales = 0;
    int vendedores = 0;
    int zonas = 0;

    int zonasXUsuario = 0;
    int sucursalesXUsuario = 0;
    int vendedoresXUsuario = 0;
    
    float empresa[zonasXUsuario][sucursalesXUsuario][vendedoresXUsuario];
    float ventasSucursal = 0.0;
    float ventasXZona = 0.0;

    float ventasVendedoresXSucursal[3];
    float ventasTotalesGeneral = 0.0;

    printf("Ahora el usuario indica la cantidad de zonas, sucursales y vendedores\n");
    printf("Ingrese la cantidad de zonas que desea tener\n");
    scanf("%d", &zonasXUsuario);

    printf("Ingrese la cantidad de sucursales que desea tener\n");
    scanf("%d", &sucursalesXUsuario);
    
    printf("Ingrese la cantidad de vendedores que desea tener\n");
    scanf("%d", &vendedoresXUsuario);

    for (int zonas = 0; zonas < zonasXUsuario; zonas++)
    {
        ventasXZona = 0.0;
        for (int sucursales = 0; sucursales < sucursalesXUsuario; sucursales++)
        {
            ventasVendedoresXSucursal[sucursales] = 0.0;
            for (int vendedores = 0; vendedores < vendedoresXUsuario; vendedores++)
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
