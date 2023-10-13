# Importamos el módulo sys para obtener los argumentos de la línea de comandos
import sys

def fibonacci(n):
    if n <= 0:
        return "El número debe ser mayor que cero"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        for _ in range(n - 2):
            a, b = b, a + b
        return b

# Obtenemos los argumentos de la línea de comandos
argumentos = sys.argv[1:]

# Convertimos los argumentos a enteros y calculamos la serie de Fibonacci
resultado = [fibonacci(int(arg)) for arg in argumentos]

# Mostramos el resultado
print(resultado)
