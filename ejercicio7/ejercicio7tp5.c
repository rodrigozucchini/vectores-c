/*/ 
La Empresa Y posee 10 sucursales. 
Realice un algoritmo que permita ingresar el total de
ventas de cada sucursal, luego imprima las ventas previamente ingresadas.
/*/

#include <stdio.h>

int main()
{
    int sucursales = 10;
    int empresa[sucursales];
    float ventas = 0;

    for (int i = 1; i <= sucursales; i++)
    {
        printf("Ingrese la cantidad de ventas de la sucursal %d \n", i);
        scanf("%f", &ventas);
        printf("La sucursal numero %d pudo vender %.2f \n", i, ventas);
    }
}