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
    double ventasY[zona][sucursales][vendedores];

        for(int z = 0; z < zona; z++) {  
        for(int s = 0; s < sucursales; s++) {
            for(int v = 0; v < vendedores; v++) {
                printf("Ingrese el total de ventas de la zona %d sucursal %d, y el vendedor %d \n", z+1, s+1, v+1);
                scanf("%lf", &empresaY[z][s][v]);
                ventasY[z][s][v] = empresaY[z][s][v];
            }
        }
    }

    for(int j = 0; j < zona; j++) {
        for(int k = 0; k < sucursales; k++) {
            for(int l = 0; l < vendedores; l++) {
                printf("La zona %d, sucursal numero %d, del vendedor %d tiene un ingreso total de $ %.2f \n\n\n", j+1, k+1, l+1, ventasY[j][k][l]);
            }
        }
    }
   return 0;
}