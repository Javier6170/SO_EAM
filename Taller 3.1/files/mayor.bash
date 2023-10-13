#!/bin/bash

# Lista de números
numeros=(4 7 2 9 1 5 8)

# Inicializar la variable que almacenará el número más grande
maximo=${numeros[0]}

# Recorrer la lista para encontrar el número más grande
for numero in "${numeros[@]}"; do
    if ((numero > maximo)); then
        maximo=$numero
    fi
done

# Imprimir el resultado
echo "El número más grande es: $maximo"

