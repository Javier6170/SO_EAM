## Parcial Sistema operativos - Parte 1

1. Cree dos usuarios (maria y pepe), a cada uno se les debe asignar una contraseña y haga que ambos pertenezcan al mismo grupo.



```
sudo useradd maria
```

```
sudo passwd maria
```


```
sudo useradd pepe
sudo passwd pepe
```

- Para agregar ambos usuarios a un grupo común, puedes crear un nuevo grupo y agregar los usuarios a ese grupo. Por ejemplo, para crear un grupo llamado "ingenieros":

```
sudo addgroup ingenieros
```

```
sudo usermod -aG ingenieros maria
sudo usermod -aG ingenieros pepe
```
- Imagen de Ejemplo:

[![Screenshot-from-2023-09-30-00-09-59.png](https://i.postimg.cc/7ZKM5mtM/Screenshot-from-2023-09-30-00-09-59.png)](https://postimg.cc/yDSS5XHk)

- Ejemplo de como se ven los usuarios creados:

[![7.png](https://i.postimg.cc/wxDgpDJx/7.png)](https://postimg.cc/kDMkN6fL)

2. Listar todos los archivos (incluídos los ocultos) del directorio raíz. Use un paginador.

```
ls -a | less
```

- Imagen de Ejemplo

[![2.png](https://i.postimg.cc/Gh8HFzpx/2.png)](https://postimg.cc/8jGpDRM7)

3. Mostrar todos los archivos del directorio /etc que terminan en “t”. Puede usar comodines (*) así como se usan en el comando find. La respuesta se debe ver en forma de lista (con permisos, peso y fecha de creación, etc).

``` 
ls -l /etc/*t
```

- Imagen de Ejemplo :

[![3.png](https://i.postimg.cc/g2GjCpDN/3.png)](https://postimg.cc/3db3GPzv)

4. Instale el paquete tree en su sistema. Recuerde que puede usar un gestor de software para esto (yum, apt, pacman). Use tree para mostrar todas las carpetas del directorio /home.


``` 
sudo apt-get update
sudo apt-get install tree
```

``` 
sudo yum install tree
```

``` 
sudo pacman -S tree
```

``` 
tree /home
```

[![4.png](https://i.postimg.cc/8zb4G1V5/4.png)](https://postimg.cc/JsGZcC0V)

- Y al ejecutar el comando `tree` trae lo siguiente: 

[![5.png](https://i.postimg.cc/28rBDnjQ/5.png)](https://postimg.cc/F1CKbdLz)

5. Crear los directorios dir1, dir2 y dir3 en el directorio /home/pepe/prueba. Dentro de dir1 crear el directorio dir11. Dentro del directorio dir3 crear el directorio dir31. Dentro del directorio dir31, crear los directorios dir311 y dir312.

``` 
mkdir -p /home/pepe/prueba/dir1/dir11
mkdir -p /home/pepe/prueba/dir2
mkdir -p /home/pepe/prueba/dir3/dir31/dir311
mkdir -p /home/pepe/prueba/dir3/dir31/dir312
```

- Ejemplo de imagen:

[![6.png](https://i.postimg.cc/5NCKhd0Y/6.png)](https://postimg.cc/yk7TRG0s)

6. Copiar el archivo /etc/group a un archivo llamado mensaje en el directorio prueba creado en el punto anterior.

``` 
cp /etc/group /home/pepe/prueba/mensaje
```

- Imagen de ejemplo

[![8.png](https://i.postimg.cc/vHWtnr2N/8.png)](https://postimg.cc/svgWdhrY)

7. Copiar mensaje en dir1, dir2 y dir3.

``` 
cp /home/pepe/prueba/mensaje /home/pepe/prueba/dir1
cp /home/pepe/prueba/mensaje /home/pepe/prueba/dir2
cp /home/pepe/prueba/mensaje /home/pepe/prueba/dir3
```

- Imagen de Ejemplo 

[![9.png](https://i.postimg.cc/k4xqdMyG/9.png)](https://postimg.cc/KkvdP2wh)

8. Copiar la carpeta prueba desde `/home/pepe` a `/home/maria`

- Para copiar la carpeta prueba desde el directorio `/home/pepe` a `/home/maria`, podemos utilizar el comando cp con la opción -r para copiar recursivamente la carpeta y su contenido. De la siguiente forma

``` 
cp -r /home/pepe/prueba /home/maria
```

- Podemos verificar esto de la siguiente forma

``` 
ls /home/maria
```

- Imagen de ejemplo

[![10.png](https://i.postimg.cc/d0d88NCb/10.png)](https://postimg.cc/5H4YJ3ng)

9. Mover el directorio dir31 de maría y sus subdirectorios dentro de dir2.

- Para mover el directorio `dir31` y sus subdirectorios desde `/home/maria/prueba/dir3` a `/home/maria/prueba/dir2`, podemos utilizar el comando `mv`. Aquí está el comando:

- Primero debemos crear el directorio mkdir `/home/maria/prueba`

``` 
mkdir /home/maria/prueba
```

- Luego:

``` 
mv /home/maria/dir3/dir31 /home/maria/prueba/dir2/
```

- Podemos verificar esto de la siguiente forma:

``` 
ls /home/maria/prueba/dir2
```
 
- Imagen de ejemplo: 

[![11.png](https://i.postimg.cc/k5gNh2w7/11.png)](https://postimg.cc/G46s4hZf)


10. Crear un enlace simbólico al directorio dir1 dentro del directorio dir3 llamado enlacedir1.

``` 
ln -s /home/maria/prueba/dir1 /home/maria/prueba/dir3/enlacedir1
```

``` 
ls -l /home/maria/prueba/dir3
```

- Imagen de Ejemplo:

[![12.png](https://i.postimg.cc/7ZKCQmfW/12.png)](https://postimg.cc/MnjKn007)


11. ¿Cuáles son los actuales permisos del directorio dir2?


- Podemos utilizar el siguiente comando para ver los permisos:

``` 
ls -ld /home/maria/prueba/dir2
```

[![13.png](https://i.postimg.cc/3N6hv0R9/13.png)](https://postimg.cc/p5D3NTKn)


12. Utilizando la notación simbólica (ugo rwx), eliminar todos los permisos de escritura (propietario, grupo, otros) del directorio dir2.

``` 
chmod a-w /home/maria/prueba/dir2
```

- Podemos Verificarlo de la siguiente forma:

``` 
ls -ld /home/maria/prueba/dir2
```

- Imagen de Ejemplo:

[![14.png](https://i.postimg.cc/9XNwpxwg/14.png)](https://postimg.cc/jCPjq4Xy)

13. Utilizando la notación octal (4, 2 y 1), eliminar el permiso de lectura del directorio dir2, al resto de los usuarios.

``` 
chmod 111 /home/maria/prueba/dir2
```

- Podemos verificarlo de la siguiente forma:

``` 
ls -ld /home/maria/prueba/dir2
```

- Imagen de ejemplo:

[![15.png](https://i.postimg.cc/HW21DK93/15.png)](https://postimg.cc/4nmSpWMh)


14. ¿Cuáles son ahora los permisos asociados a dir2?

``` 
ls -ld /home/maria/prueba/dir2
```

y lo podemos ver de la siguiente forma:

[![15.png](https://i.postimg.cc/HW21DK93/15.png)](https://postimg.cc/4nmSpWMh)

15. Crear bajo dir2, un directorio llamado dir2l.

``` 
mkdir /home/maria/prueba/dir2/dir2l
```

``` 
ls /home/maria/prueba/dir2
```

- Ejemplo:

[![16.png](https://i.postimg.cc/44bg7Gxz/16.png)](https://postimg.cc/t7TfwLPT)

16. Concederse a sí mismo permiso de escritura en el directorio dir2 e intentar de nuevo el paso anterior.


``` 
ls /home/maria/prueba/dir2
```

``` 
ls /home/maria/prueba/dir2
```
- Imagen de Ejemplo:

[![17.png](https://i.postimg.cc/JzCZTbLw/17.png)](https://postimg.cc/svKMxGxK)

17. ¿Cuáles son los permisos por omisión asignados a los archivos?

## Permisos por Omisión Asignados a Archivos

Los permisos por omisión asignados a los archivos en sistemas basados en UNIX y Linux, como Git, son generalmente 666. Esto se traduce en permisos `-rw-rw-rw-`, lo que significa que el propietario, el grupo y otros usuarios tienen permisos de lectura y escritura, pero no tienen permisos de ejecución. Estos valores pueden ser modificados por la configuración del sistema y por las configuraciones específicas del usuario. Es importante tener en cuenta que los permisos por omisión pueden ser influenciados por varias configuraciones, como la máscara de creación de archivos (umask), que especifica qué permisos se deben quitar de los permisos por omisión cuando se crea un nuevo archivo.

18. ¿Cuáles son los permisos por omisión asignados a las carpetas?

## Permisos por Omisión Asignados a Carpetas

Los permisos por omisión asignados a las carpetas (directorios) en sistemas basados en UNIX y Linux, como Git, son generalmente 777. Esto se traduce en permisos `rwxrwxrwx`, lo que significa que el propietario, el grupo y otros usuarios tienen permisos de lectura, escritura y ejecución.

Es importante señalar que estos valores pueden ser afectados por la configuración del sistema y las configuraciones específicas del usuario, como la `umask` que puede modificar los permisos por omisión al crear nuevos directorios.

La `umask` especifica qué permisos se deben quitar de los permisos por omisión al crear un nuevo archivo o directorio. Por ejemplo, si la `umask` está configurada en 002, los permisos por omisión para un nuevo directorio serán `rwxrwxr-x` (775 en notación octal).

En resumen, los permisos por omisión pueden variar según la configuración del sistema y la `umask`, pero típicamente los nuevos directorios tendrán permisos `rwxrwxrwx`.


19. Elimine la carpeta dir2.  

``` 
rm -r /home/maria/prueba/dir2
```

Y para verificar esto con el comando:

``` 
ls /home/maria/prueba
```

- Imagen de Ejemplo:

[![18.png](https://i.postimg.cc/Mp0Pt6gD/18.png)](https://postimg.cc/qNRxvTJh)

20. Muestre en pantalla el estado de los recursos del computador. Uso de memoria, uso de CPU y procesos.

## Uso de memoria

``` 
top
```

## Uso de Memoria Alternativa

``` 
free -m
```

## Lista de Procesos

``` 
ps aux
```

## Uso de CPU Alternativa

``` 
mpstat
```

## Uso de Memoria Alternativa

``` 
vmstat
```

- Ejemplo de como se podria ver:

[![19.png](https://i.postimg.cc/VsDbq37C/19.png)](https://postimg.cc/Hj8xHP1Y)

21. Listar únicamente los procesos que pertenezcan al usuario root.

Con el siguiente comando:

``` 
ps aux | grep root
```

Si quires una lista mas detallada es con el siguiente comando:

``` 
ps -U root -u root u
```

- Imagen de Ejemplo:

[![20.png](https://i.postimg.cc/kgFC8dsr/20.png)](https://postimg.cc/v4BCFkCX)

22. Cree un archivo y con ayuda de nano o vi programe un script en Python que reciba como argumentos 5 números y verifique si dichos números hacen parte de la sucesión de fibonacci. 

Con el siguiente comando:

``` 
nano verificar_fibonacci.py
```

23. Al archivo anterior asígnele permiso de ejecución al usuario y al grupo al que pertenezca, luego debe ejecutarlo para comprobar su funcionamiento. Ejemplo: para ejecutar el archivo se debería escribir: ./serie.py 2 12 43 64 21.

[![21.png](https://i.postimg.cc/qR71kWjH/21.png)](https://postimg.cc/Y4J6Rn5d)

24. Cambie el nombre del script anterior por otro. 

``` 
mv serie.py nuevo_nombre.py
```

[![22.png](https://i.postimg.cc/G3KsPHLK/22.png)](https://postimg.cc/bdGJpY2S)

25. Investigue cómo se puede saber cuántos archivos y carpetas tiene un directorio. Haga la prueba con el directorio /usr/bin

- Una forma de encontrar el conteo es:

``` 
ls -la /usr/bin | wc -l
```
- Otra forma de obtener el conteo es usando find:

``` 
find /usr/bin -maxdepth 1 -type f -o -type d | wc -l
```

[![23.png](https://i.postimg.cc/qv4J1G1C/23.png)](https://postimg.cc/LnQFXjKH)

26. Instale en la máquina virtual un servidor openssh y cree una segunda máquina virtual para que se conecte a la primera usando ssh. Recuerde configurar ambas máquinas virtuales para que usen la configuración de red en modo Puente. Conéctese usando uno de los usuarios creados en el punto 1. Una vez conectado a la máquina uno, ejecute el script hecho en el punto 23.

## Servidor SSH

``` 
sudo apt-get update
sudo apt-get install openssh-server
```
``` 
sudo nano /etc/ssh/sshd_config
```
``` 
sudo systemctl restart ssh
```

[![24.png](https://i.postimg.cc/W36SwTzZ/24.png)](https://postimg.cc/PpJmtGmf)

## Segunda Maquina
















