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
strace -c -S java ./numeroMayor.java
```
[![strace-c-s-java.png](https://i.postimg.cc/YSWx8ZNL/strace-c-s-java.png)](https://postimg.cc/GBbYmM5b)






