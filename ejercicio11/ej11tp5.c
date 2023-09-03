/*
Copie y modifique el algoritmo anterior. Ahora la Empresa Y vende en todo el país. El país ha
sido dividido en 3 zonas, en cada zona hay 4 sucursales y en cada sucursal hay 2 vendedores.
Ingresar los totales de ventas de cada zona, de cada sucursal y cada vendedor. Utilice un
arreglo de 3 dimensiones para almacenar las ventas.
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
            }
            printf("EL TOTAL DE LA SUCURSAL %d ES DE %.2f \n\n\n", s+1, totalSucursales);
            totalSucursales = 0.0;
        }
        printf("EL TOTAL DE LA ZONA %d ES DE %.2f \n\n\n", z+1, totalZona);
        totalZona = 0.0;
    }

    return 0;
}
