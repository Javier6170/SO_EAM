package main

import "fmt"

func findMax(numbers []int) int {
    if len(numbers) == 0 {
        // Manejar el caso de una lista vacía
        return 0
    }

    max := numbers[0]

    for _, num := range numbers {
        if num > max {
            max = num
        }
    }

    return max
}

func main() {
    // Crear una lista de números
    numbers := []int{4, 2, 9, 7, 1, 5, 8}

    // Encontrar el número más grande
    maxNumber := findMax(numbers)

    // Imprimir el resultado
    fmt.Printf("El número más grande es: %d\n", maxNumber)
}

