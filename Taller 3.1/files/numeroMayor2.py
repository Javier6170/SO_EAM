#!/usr/bin/env python2

def encontrar_maximo(lista):
    if not lista:
        return None
    maximo = lista[0]
    for numero in lista:
        if numero > maximo:
            maximo = numero
    return maximo

# Ejemplo de uso
lista_numeros = [5, 2, 9, 1, 7, 6]
resultado = encontrar_maximo(lista_numeros)
print "El número más grande es:", resultado
