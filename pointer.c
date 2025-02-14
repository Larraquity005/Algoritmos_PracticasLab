#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20];  // Un array de 20 caracteres
    char *pointer;   // Un puntero para caracteres
    char *pointer2;  // Otro puntero

    strcpy(str_a, "Hello, world!\n"); // Copia la cadena en str_a
    pointer = str_a;  // Apunta al inicio del array
    printf("%s", pointer); // Imprime la cadena completa

    pointer2 = pointer + 2; // Apunta 2 bytes más adelante
    printf("%s", pointer2); // Imprime desde la nueva posición

    strcpy(pointer2, "y you guys!\n"); // Modifica la cadena
    printf("%s", pointer); // Vuelve a imprimir

    return 0;
}

