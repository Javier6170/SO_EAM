#include <stdio.h>

int encontrarMaximo(int numeros[], int longitud) {
    if (longitud == 0) {
        // Manejar el caso de una lista vacía
        return 0;
    }

    int maximo = numeros[0];

    for (int i = 1; i < longitud; ++i) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    return maximo;
}

int main() {
    // Lista de números
    int numeros[] = {4, 7, 2, 9, 1, 5, 8};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    // Encontrar el número más grande
    int maximo = encontrarMaximo(numeros, longitud);

    // Imprimir el resultado
    printf("El número más grande es: %d\n", maximo);

    return 0;
}

