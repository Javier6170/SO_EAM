## Tarea 1 - Procesos

En parejas realizar lo siguiente:

- Ir a la presentación de Llamadas al sistema y realizar la práctica que inicia en la diapositiva 15. Para este caso no repita el ejemplo del "Hola Mundo" sino que debe programar un algoritmo que recorra una lista de números y saque el número más grande. Haga la comparativa con todos los lenguajes. Omita el lenguaje ensamblador.




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


Empezamos con python2

- Creammos el scrip para Python 2:

[![python2.png](https://i.postimg.cc/cLKbfKPh/python2.png)](https://postimg.cc/HrgzgLY8)

- Ahora hacemos las llamadas al sistema

No se puede ejecutar Python2 en debian 12 ya que Python 2 no está disponible en los repositorios de Debian 12 (Bookworm) por defecto, ya que Python 2 ha sido descontinuado y no se encuentra en los repositorios oficiales de Debian. En su lugar, se recomienda utilizar Python 3 para nuevos proyectos y tareas.

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

