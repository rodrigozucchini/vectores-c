#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(int argc, char const *argv[])
{
    char mensaje[20];
    char mensaje2[20];
    strcpy(mensaje, "Hola ");
    strcpy(mensaje2, "Rodrigo");

    printf("Mensaje: %s \n", mensaje);
    printf("Mensaje2: %s \n", mensaje2);

    strcat(mensaje, mensaje2);

    printf("Mensaje: %s \n", mensaje);
    printf("Mensaje2: %s ", mensaje2);

    return 0;
}

int main(int argc, char const *argv[])
{
    char mensaje[20];
    char mensaje2[20];
    char mensaje3[10];
    strcpy(mensaje, "AAAA");
    strcpy(mensaje2, "BBB");
    strcpy(mensaje3, "AAAA");

    printf("%s | %s = %d",mensaje, mensaje3, strcmp(mensaje, mensaje3));

    return 0;
}

int main(int argc, char const *argv[])
{
    char mensaje[20];
    char mensaje2[20];
    char mensaje3[10];
    strcpy(mensaje, "AAAA");
    strcpy(mensaje2, "BBB");
    strcpy(mensaje3, "AAAA");

    printf("%s | %s = %d",mensaje, mensaje3, strcmp(mensaje, mensaje3));

    return 0;
}

int main(int argc, char const *argv[])
{
    char mensaje[20];
    strcpy(mensaje, "AAAABD-SDSA-sadsa");
    char* encuentro = strchr(mensaje, '-');
    char* encuentro2 = strrchr(mensaje, '-');

    printf("%s\n", encuentro);
    printf("%s", encuentro2);

    return 0;
}
*/
int main(int argc, char const *argv[])
{
    char mensaje[20];
    char mensaje2[20];
    strcpy(mensaje, "AAAAB");
    strcpy(mensaje2, "A");
    char* encuentro = strstr(mensaje, mensaje2);

    printf("%s\n", encuentro);
    size_t longitud = strlen(mensaje);

    // Imprimir la longitud
    printf("Longitud de la cadena: %zu\n", longitud);
    return 0;
}