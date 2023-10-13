## Javier Rodriguez Marulanda - Santiago Beltran Florez

## Tarea 1 - Procesos

En parejas realizar lo siguiente:

- Ir a la presentación de Llamadas al sistema y realizar la práctica que inicia en la diapositiva 15. Para este caso no repita el ejemplo del "Hola Mundo" sino que debe programar un algoritmo que recorra una lista de números y saque el número más grande. Haga la comparativa con todos los lenguajes. Omita el lenguaje ensamblador.




## Soluciòn

## GO

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

# Llamada del Sistema *GO*

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


## Bash

- Creamos nuestro script con vim

```
vim mayor.bash
```

- Y añadimos el codigo:

```
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
```

- Luego lo ejecutamos:

[![5.png](https://i.postimg.cc/ZYvNxMqn/5.png)](https://postimg.cc/NLYLgbmv)

- Funciona correctamente felicidades!

# Llamada del Sistema *Bash*

```
El número más grande es: 9
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
  0.00    0.000000           0         5           read
  0.00    0.000000           0         1           write
  0.00    0.000000           0         7           close
  0.00    0.000000           0         3           lseek
  0.00    0.000000           0        14           mmap
  0.00    0.000000           0         4           mprotect
  0.00    0.000000           0         1           munmap
  0.00    0.000000           0         3           brk
  0.00    0.000000           0        14           rt_sigaction
  0.00    0.000000           0         5           rt_sigprocmask
  0.00    0.000000           0         2         1 ioctl
  0.00    0.000000           0         2           pread64
  0.00    0.000000           0         1         1 access
  0.00    0.000000           0         1           dup2
  0.00    0.000000           0         3           getpid
  0.00    0.000000           0         1           execve
  0.00    0.000000           0         1           uname
  0.00    0.000000           0         3         1 fcntl
  0.00    0.000000           0         1           sysinfo
  0.00    0.000000           0         1           getuid
  0.00    0.000000           0         1           getgid
  0.00    0.000000           0         1           geteuid
  0.00    0.000000           0         1           getegid
  0.00    0.000000           0         3           getppid
  0.00    0.000000           0         1           getpgrp
  0.00    0.000000           0         1           arch_prctl
  0.00    0.000000           0         1           futex
  0.00    0.000000           0         1           set_tid_address
  0.00    0.000000           0         7           openat
  0.00    0.000000           0        17           newfstatat
  0.00    0.000000           0         1           set_robust_list
  0.00    0.000000           0         3           prlimit64
  0.00    0.000000           0         1           getrandom
  0.00    0.000000           0         1           rseq
------ ----------- ----------- --------- --------- ----------------
100.00    0.000000           0       113         3 total
```

- Obtuvimos que solo se hicieron 113 llamadas del sistema

## C

Empezamos instalando GCC:

```
sudo apt-get install build-essential
```

[![6.png](https://i.postimg.cc/HkbD0Hqz/6.png)](https://postimg.cc/0z5BPg2K)

creamos nuestro codigo:

```
vim mayor.c
```

el codigo fuente es el siguiente:

```
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
```

y la ejecución es la siguiente:

[![7.png](https://i.postimg.cc/W1zSj7nk/7.png)](https://postimg.cc/hXFV1TND)


# Llamada del Sistema *C*

```
root@debian:/home/javi-code/Documents/SO_EAM/Taller 3.1/files# strace -c ./mayorc
El número más grande es: 9
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
 47.72    0.000157         157         1           execve
 20.06    0.000066           8         8           mmap
  5.78    0.000019           6         3           mprotect
  4.56    0.000015           5         3           newfstatat
  4.26    0.000014          14         1           munmap
  4.26    0.000014           7         2           openat
  3.34    0.000011          11         1         1 access
  3.04    0.000010          10         1           write
  1.82    0.000006           2         3           brk
  0.91    0.000003           3         1           read
  0.91    0.000003           1         2           pread64
  0.91    0.000003           3         1           getrandom
  0.61    0.000002           1         2           close
  0.61    0.000002           2         1           prlimit64
  0.30    0.000001           1         1           arch_prctl
  0.30    0.000001           1         1           set_tid_address
  0.30    0.000001           1         1           set_robust_list
  0.30    0.000001           1         1           rseq
------ ----------- ----------- --------- --------- ----------------
100.00    0.000329           9        34         1 total
```


## Python 3

Empezamos con python3

- Creammos el scrip para Python 3:

[![python3.png](https://i.postimg.cc/yd0sVp7M/python3.png)](https://postimg.cc/HcWfz2cz)

- Ahora hacemos las llamadas al sistema

```
strace python3 ./numeroMayor3.py :
```

[![strace.png](https://i.postimg.cc/DzXPwLRV/strace.png)](https://postimg.cc/2qCZHbzT)

```
strace -c python3 ./numeroMayor3.py:
```

[![starce-c.png](https://i.postimg.cc/wMGp2C2s/starce-c.png)](https://postimg.cc/PvY9rFBt)

```
strace -c -S name  python3 ./numeroMayor3.py:
```

[![strace-c-s.png](https://i.postimg.cc/44tQg6Vp/strace-c-s.png)](https://postimg.cc/ThdDjWkP)


## Python 2

Empezamos con python2

- Creammos el scrip para Python 2:

[![python2.png](https://i.postimg.cc/cLKbfKPh/python2.png)](https://postimg.cc/HrgzgLY8)

- Ahora hacemos las llamadas al sistema

No se puede ejecutar Python2 en debian 12 ya que Python 2 no está disponible en los repositorios de Debian 12 (Bookworm) por defecto, ya que Python 2 ha sido descontinuado y no se encuentra en los repositorios oficiales de Debian. En su lugar, se recomienda utilizar Python 3 para nuevos proyectos y tareas.

## Java

Empezamos con java

- Creamos el scrip para java:

[![JAVA.png](https://i.postimg.cc/mDpKM0Tz/JAVA.png)](https://postimg.cc/yg9fCpgs)


- Ahora hacemos las llamadas al sistema

```
strace java ./numeroMayor.java
```

[![strace-java.png](https://i.postimg.cc/gj9QN36m/strace-java.png)](https://postimg.cc/njk3LjkP)


```
strace -c java ./numeroMayor.java
```

[![strace-c-java.png](https://i.postimg.cc/xdh41L5M/strace-c-java.png)](https://postimg.cc/LqkTyYr8)


```
strace -c -S name java ./numeroMayor.java
```

[![strace-c-s-java.png](https://i.postimg.cc/YSWx8ZNL/strace-c-s-java.png)](https://postimg.cc/GBbYmM5b)


## Tablas de llamadas al Sistema
```
% Lenguaje     Total de llamadas
----------- --------------------- 
Go                          10107
Bash                          113
C                               9
Java                          151  
Python 3                      342
----------- --------------------- 
```

## Parte 2


- Ir a la presentación de Gestión de Procesos y realizar la práctica que inicia en la diapositiva 16.

Ver los Estados de los Procesos:

Para ver los estados de los procesos, puedes ejecutar el siguiente comando en la terminal:

```
ps -o user,ppid,pid,sched,s,cmd -f
```

[![ps-o-user-ppid-pid-sched-s-cmd-f.png](https://i.postimg.cc/jdP72JHP/ps-o-user-ppid-pid-sched-s-cmd-f.png)](https://postimg.cc/dLQ1S3SV)


Instalar Tmux:

Si Tmux no está instalado, puedes instalarlo usando apt-get con el siguiente comando:

```
sudo apt-get install tmux
```

[![install.png](https://i.postimg.cc/ydmMWj82/install.png)](https://postimg.cc/ygNQbF9T)

Después de instalar Tmux, puedes ejecutarlo con el siguiente comando:

```
tmux
```
Luego de  escribir tmux:

luego presionar: Ctrl+b y luego: comillas (Shift+2). 
Esto permite multiplexar la terminal para ejecutar varios comandos al tiempo. Puede usar Ctrl+b (flecha arriba o flecha abajo) para moverse entre terminales.

[![duplicando-terminal.png](https://i.postimg.cc/7ZNXCR33/duplicando-terminal.png)](https://postimg.cc/v4c5k3ST)

En la terminal de arriba ejecute: watch ps -o user,ppid,pid,sched,s,cmd -f. Esto permite ejecutar ese comando cada cierto tiempo (por defecto 2 segundos).

```
 watch ps -o user,ppid,pid,sched,s,cmd -f
```

[![watch-ps-o-user-ppid-pid-sched-s-cmd-f.png](https://i.postimg.cc/SN1xyS5C/watch-ps-o-user-ppid-pid-sched-s-cmd-f.png)](https://postimg.cc/3dpT1T3x)

En la terminal de abajo cree un script en c (mensaje) y escriba lo siguiente:

```
nano scriptC.c 
```

[![creacion-Scrip-C.png](https://i.postimg.cc/mDm0QD7S/creacion-Scrip-C.png)](https://postimg.cc/7GTs4qsC)


Compile el archivo con gcc y compruebe lo que sucede con los procesos listados. Ahora, ejecute el script en segundo plano, así: ./mensaje & Luego, ejecute jobs (para listar trabajos en segundo plano) y fg (para traerlo al primer plano)

Luego, para compilar el programa, ejecuta el siguiente comando:

```
gcc scriptC.c -o scriptC
```

Ejecuta el programa en segundo plano con el comando &:

```
./scriptC &
```

Puedes listar trabajos en segundo plano con jobs 

```
jobs
```

traerlo al primer plano con fg

ejemplo :

```
fg 1
```

[![gcc-script-C-c-o-script-C-script-C-jobs-fg-1.png](https://i.postimg.cc/RV2q7CR9/gcc-script-C-c-o-script-C-script-C-jobs-fg-1.png)](https://postimg.cc/MvbWxSNr)


Crear un Estado Zombie:

fork() crear un clon del proceso. fork() devuelve un 0 para el padre y otro número para el hijo. Al ser el 
padre 0 entonces finaliza el proceso. Pero el hijo espera 60 segundos, el problema es que el padre ya no 
existe. 

Compile y ejecute el script.

Creamos un script:

```
nano fork.c
```

[![Creacion-Scrip-Pagina23.png](https://i.postimg.cc/6pjKrMwZ/Creacion-Scrip-Pagina23.png)](https://postimg.cc/hXdNgbX4)


Luego, para compilar el programa, ejecuta el siguiente comando:

```
gcc fork.c -o fork
```

Ejecuta el programa en segundo plano con el comando &:

```
./fork &
```

[![Compile-y-ejecute-el-script.png](https://i.postimg.cc/GhQnrd7r/Compile-y-ejecute-el-script.png)](https://postimg.cc/HVVh9D1P)


Usar vfork() para Evitar un Estado Zombie:

Puedes usar vfork() para evitar el estado zombie.


Creamos un script:

```
nano vfork.c
```

[![Creacion-Scrip-Pagina25.png](https://i.postimg.cc/fT4qPpMs/Creacion-Scrip-Pagina25.png)](https://postimg.cc/yWPTgfJp)

Luego, para compilar el programa, ejecuta el siguiente comando:

```
gcc vfork.c -o vfork
```

Ejecuta el programa en segundo plano con el comando &:

```
./vfork &
```

El proceso hijo utiliza _exit(0) en lugar de exit(0) para evitar el estado zombie.

[![ejecucion-Vfork.png](https://i.postimg.cc/m2Nj5rd3/ejecucion-Vfork.png)](https://postimg.cc/56y8HfWj)
