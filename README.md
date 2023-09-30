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





