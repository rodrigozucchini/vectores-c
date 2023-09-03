/*
Copie y modifique el algoritmo anterior. Ahora la Empresa Y tiene 3 sucursales y 5
vendedores en cada sucursal. Ingrese por teclado las ventas totales diarias de cada vendedor
en cada sucursal (utilice para ello un arreglo bidimensional de 3 filas por 5 columnas).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sucursales = 3;
    int vendedores = 5;
    double empresaY[sucursales][vendedores];

    for(int s = 0; s < sucursales; s++) {
        for(int v = 0; v < vendedores; v++) {
            printf("Ingrese el total de ventas de la sucursal %d, y el vendedor %d \n", s+1, v+1);
            scanf("%lf", &empresaY[s][v]);
            printf("La sucursal numero %d ,del vendedor %d tiene un ingreso total de $ %.1f \n\n\n", s+1, v+1, empresaY[s][v]);
        }
    }

    return 0;
}
