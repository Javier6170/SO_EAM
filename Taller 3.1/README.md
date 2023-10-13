## Tarea 1 - Procesos

En parejas realizar lo siguiente:

- Ir a la presentación de Llamadas al sistema y realizar la práctica que inicia en la diapositiva 15. Para este caso no repita el ejemplo del "Hola Mundo" sino que debe programar un algoritmo que recorra una lista de números y saque el número más grande. Haga la comparativa con todos los lenguajes. Omita el lenguaje ensamblador.

- Ir a la presentación de Gestión de Procesos y realizar la práctica que inicia en la diapositiva 16.


## Soluciòn

Empezamos instalando Go:

```
sudo apt-get install golang
```


[![Screenshot-from-2023-10-12-21-26-48.png](https://i.postimg.cc/c4JM0jbx/Screenshot-from-2023-10-12-21-26-48.png)](https://postimg.cc/t7LVzrbw)

- Podemos ver la versiòn de go con el comando:

```
go version
```
- Se vera algo parecido como esto:

[![2.png](https://i.postimg.cc/7LBKy236/2.png)](https://postimg.cc/f39cckgn)

- Ahora creamos el archivo de Go:

```
vim mayor.go
```

- Con el Siguiente codigo:

```
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

```

- Pongamoslo a prueba: 

- Ejecutamos el siguiente comando:

```
go run mayor.go
```

- Ahora hacemos una llamada al sistema con el siguiente comando:

```
 strace -c go run ./mayor.go
```

- Nos devueve automaticamente esto:

```
El número más grande es: 9
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ------------------
 35.90    0.018795        4698         4           wait4
 20.77    0.010874           4      2578        56 newfstatat
 11.84    0.006197           1      3223           fcntl
  8.52    0.004459           5       799         3 openat
  7.17    0.003753           2      1408           read
  5.56    0.002911           3       769           close
  3.54    0.001851          21        88           getdents64
  2.55    0.001336           1       816       794 epoll_ctl
  1.47    0.000770          11        70           mmap
  1.06    0.000555         138         4           waitid
  0.36    0.000189           2        85           fstat
  0.35    0.000184          14        13           futex
  0.26    0.000135          16         8           clone
  0.19    0.000097          32         3           mkdirat
  0.14    0.000074           1        43           pread64
  0.06    0.000030           2        12           pipe2
  0.06    0.000029           1        25           rt_sigprocmask
  0.06    0.000029           2        13         3 rt_sigreturn
  0.05    0.000027           9         3           write
  0.05    0.000026          26         1           readlinkat
  0.02    0.000009           9         1           ftruncate
  0.01    0.000007           0        11           epoll_pwait
  0.01    0.000005           5         1           epoll_create1
  0.01    0.000004           4         1           setrlimit
  0.01    0.000003           0         4           getpid
  0.01    0.000003           3         1           utimensat
  0.00    0.000002           2         1           getrlimit
  0.00    0.000000           0       114           rt_sigaction
  0.00    0.000000           0         2           madvise
  0.00    0.000000           0         1           execve
  0.00    0.000000           0         2           sigaltstack
  0.00    0.000000           0         1           arch_prctl
  0.00    0.000000           0         1           gettid
  0.00    0.000000           0         1           sched_getaffinity
------ ----------- ----------- --------- --------- ------------------
100.00    0.052354           5     10107       856 total
```

- Vista desde el sistema debian:

[![4.png](https://i.postimg.cc/ZKvTXPhf/4.png)](https://postimg.cc/9rV5770T)

