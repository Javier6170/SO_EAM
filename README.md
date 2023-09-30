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
- Imagen de Ejemplo

[![Screenshot-from-2023-09-30-00-09-59.png](https://i.postimg.cc/7ZKM5mtM/Screenshot-from-2023-09-30-00-09-59.png)](https://postimg.cc/yDSS5XHk)


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

- Imagen de Ejemplo 

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

- Ejemplo de imagen

[![6.png](https://i.postimg.cc/5NCKhd0Y/6.png)](https://postimg.cc/yk7TRG0s)
