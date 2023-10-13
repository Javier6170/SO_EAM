## Parcial Sistema operativos - Parte 1

## Javier Rodriguez Marulanda - Luisa Pulido

### Previa - instalación
Desde la pagina oficial de Debian podemos encontrar toda la información referente a esta distribución, en esta ocasión vamos a usar Debian 12 en AMDX644.

En la parte inferior de la imagen anterior podemos ver que se nos ofrecen distintas herramientas y entre ellas una muy importante que es el manual de instalacion.

 [![Descarga-1.jpg](https://i.postimg.cc/1Rj35PCJ/Descarga-1.jpg)](https://postimg.cc/5j8VscMC)

Si nos dirigimos ahí, podemos ver que para cada arquitectura que queramos decargar, hay distintos formatos de manual en una cantidad considerable de idiomas.

[![Descarga-manual.jpg](https://i.postimg.cc/28dhK27Q/Descarga-manual.jpg)](https://postimg.cc/crHvK7jC)

Una vez elijamos la arquitectura que vamos a usar para Debian, empezamos instalando la ISO  de Debian.

[![proceso-install.jpg](https://i.postimg.cc/MGrjkLLL/proceso-install.jpg)](https://postimg.cc/bGkvkmp0)

Tenemos dos opciones, hacer la instalación en el disco duro de nuestra maquina o montarlo en una maquina virtual, en esta ocasión se hara en una maquina virtual.

Cuando ya tengamos nuestra ISO de Debian instalada, nos dirigimos al software que usaremos para hacer el montaje de la maquina virtual y hacer la respectiva configuración.

[![mv-1.jpg](https://i.postimg.cc/VNdMG1NT/mv-1.jpg)](https://postimg.cc/SXbJRBC7)

- Primeramente definimos el nombre y que sistema operativo vamos a instalar.
  
  [![config-mv.jpg](https://i.postimg.cc/Cx4c8bPN/config-mv.jpg)](https://postimg.cc/cvr7ytNg)

- Despues definimos el tamaño de la RAM.

  [![config-ram.jpg](https://i.postimg.cc/c1Qw6057/config-ram.jpg)](https://postimg.cc/yW8kb4KW)

- Luego escogemos la opción de crear un nuevo disco virtual.
  
  [![cong-disk.jpg](https://i.postimg.cc/1XH8BRLL/cong-disk.jpg)](https://postimg.cc/FkYFsvFZ)

- Definimos el tipo de archivo que va a ser el disco.

 [![conf-disk.jpg](https://i.postimg.cc/DyShBwkL/conf-disk.jpg)](https://postimg.cc/bsf4v8vw)

- Definimos si el disco va a tener un tamaño fijo o va a ser dinamico.
  
  [![conf-space.jpg](https://i.postimg.cc/kMxY9rQz/conf-space.jpg)](https://postimg.cc/5j2SqRkS)

- Ultimamente definimos que tamaño va a tener este.
  [![conf-spacedisk.jpg](https://i.postimg.cc/wxc2ZXHd/conf-spacedisk.jpg)](https://postimg.cc/MXH1jjvs)

- Ahora toca darle la imagen al SO accediendo a las configuraciones, luego al amacenamiento para insertarlo.

 [![conf-disk-iso.jpg](https://i.postimg.cc/25tjzLDk/conf-disk-iso.jpg)](https://postimg.cc/gwvbsJjQ)

- Iniciamos la maquina para hacer las respectivas configuraciones de sistema.

  [![conf-so.jpg](https://i.postimg.cc/bYDLgZNQ/conf-so.jpg)](https://postimg.cc/dDF8ttC1)

 - Descarga de paquetes necesarios para Debian
   
  [![conf-dowload.jpg](https://i.postimg.cc/B685mzsq/conf-dowload.jpg)](https://postimg.cc/bDh2J3sM)
  
- Despues hacemos configuraciones personalizadas que son las siguientes:
  - Lenguaje
    
    [![conf-iso-languaje.jpg](https://i.postimg.cc/wMgX9jLB/conf-iso-languaje.jpg)](https://postimg.cc/qhDhL0mf)
    
  - Ubicación
    
    [![conf-so-ubi.jpg](https://i.postimg.cc/mgtQLqz7/conf-so-ubi.jpg)](https://postimg.cc/NKvybdx0)
    
  - Entrada de teclado
  - nombre de maquina
  - nombre de red
  - dominio
  - configuración de contraseña de superusuario
    
    [![conf-so-user.jpg](https://i.postimg.cc/5NfgVnSm/conf-so-user.jpg)](https://postimg.cc/yWrchh5J)
    
  - definir un usuario y su contraseña para iniciar

- Configuración de partición guiada para el disco duro.

  [![conf-so-part-disk.jpg](https://i.postimg.cc/PrP57k8s/conf-so-part-disk.jpg)](https://postimg.cc/WhcVDCnX)

- Disco y particiones que se haran en el disco.
  
  [![fn-conf-disk-part.jpg](https://i.postimg.cc/QMtDFQkL/fn-conf-disk-part.jpg)](https://postimg.cc/dhzpXTxn)
  
- Confirmar la escritura del disco y montarlo en el sistema operativo.

  [![write-disk.jpg](https://i.postimg.cc/Bb5kYbcc/write-disk.jpg)](https://postimg.cc/xNC6q0Zc)

- Configuración de gestor de paquetes.

  [![conf-gestor-pack.jpg](https://i.postimg.cc/W3Z0PJyr/conf-gestor-pack.jpg)](https://postimg.cc/ftwVckDT)

- Elegir el entorno de escritorio.

  [![conf-escritorio.jpg](https://i.postimg.cc/sX9DSp03/conf-escritorio.jpg)](https://postimg.cc/k6GmPtmH)
  

-----------------------------------------------------------------------------------------------------------------------------------------

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

- Me conectare desde mi pc de Windows por conexión SSH de mobaXtreme

[![25.png](https://i.postimg.cc/jStfyPNM/25.png)](https://postimg.cc/YhDjH4dF)

- La ip de mi maquina virtual es 192.168.136.131 entonces hacemos la respectiva configuración en mobaXtreme

## Configurando...

[![26.png](https://i.postimg.cc/tgLCNGw9/26.png)](https://postimg.cc/FfV4h8h6)

[![27.png](https://i.postimg.cc/MpChsZ63/27.png)](https://postimg.cc/ZWL7nSy6)

[![28.png](https://i.postimg.cc/JzVqvsXX/28.png)](https://postimg.cc/LnDLZ6N4)

- Y finalizando queda asi:

[![29.png](https://i.postimg.cc/LXg1Jz5y/29.png)](https://postimg.cc/dkv1XZ8d)

27. Comprima la carpeta personal del usuario pepe usando tar y gzip.

``` 
mkdir -p /ruta/del/otro/directorio/
```
``` 
tar -czvf /ruta/del/otro/directorio/pepe_home.tar.gz /home/pepe
```

[![30.png](https://i.postimg.cc/SR81f2Td/30.png)](https://postimg.cc/gLzKYJPL)

28. Copie por medio de scp esta carpeta comprimida a la segunda máquina virtual.

[![31.png](https://i.postimg.cc/tJXn28Dc/31.png)](https://postimg.cc/Q9yMM42g)

[![32.png](https://i.postimg.cc/C1JxL5Hv/32.png)](https://postimg.cc/Fdd4T96c)

```
put /ruta/local/del/archivo/pepe_home.tar.gz
```

```
ls
```

30. Instale openjdk 11 en la máquina virtual.

```
sudo apt-get install openjdk-11-jdk
```

[![33.png](https://i.postimg.cc/D06hPMYB/33.png)](https://postimg.cc/dZhgq4Fy)

31. Busque en la raíz, todas las carpetas que contengan la palabra “openjdk-11”. Solo busque carpetas, no archivos. Esta información nos dirá en qué carpeta fue instalado el jdk.

- Como yo tengo el openjdk-17 buscamos de la siguiente forma:

```
sudo find / -type d -name '*openjdk-17*'
```

[![34.png](https://i.postimg.cc/W3t014kv/34.png)](https://postimg.cc/TLMKkf07)

32. Ubíquese en la carpeta del usuario que tiene la sesión activa y descargue con wget el siguiente archivo:

- https://gist.githubusercontent.com/carlosflorezvi/b8b5082d71629c5f16c750ec30f2d9f4/raw/a158b7f73f607d5405c5d40a0824550c210e715f/descarga.txt

```
wget https://gist.githubusercontent.com/carlosflorezvi/b8b5082d71629c5f16c750ec30f2d9f4/raw/a158b7f73f607d5405c5d40a0824550c210e715f/descarga.txt
```

[![36.png](https://i.postimg.cc/xdnRnY5f/36.png)](https://postimg.cc/K1pLD6Cw)

33. Abra el anterior archivo usando cat, tail y head. Parametrice tail y head para que muestre los últimos 15 y los primeros 15 respectivamente. 

```
cat descarga.txt
```

```
head -n 15 descarga.txt
```

[![37.png](https://i.postimg.cc/sfTDJJqw/37.png)](https://postimg.cc/rztkV58r)


```
tail -n 15 descarga.txt
```

[![38.png](https://i.postimg.cc/QxBsJZpd/38.png)](https://postimg.cc/crNVdj9p)

34. Escriba un alias para ejecutar los comandos del punto anterior. Haga que sean persistentes, que siempre se puedan usar así se reinicie el computador. 

```
nano ~/.bashrc
```

```
alias catdesc='cat descarga.txt'
alias headdesc='head -n 15 descarga.txt'
alias taildesc='tail -n 15 descarga.txt'
```

[![39.png](https://i.postimg.cc/RhLPcFXD/39.png)](https://postimg.cc/hQhbnSFL)

- Carga el archivo de configuración para aplicar los cambios sin reiniciar:

```
source ~/.bashrc
```

35. Investigue qué es tmux, para qué sirve. Haga un ejemplo en la máquina virtual. 

## Tmux

es un multiplexor de terminales que permite a un usuario acceder a varias terminales dentro de una única ventana de terminal o incluso a través de una conexión remota. Proporciona una manera de ejecutar y gestionar múltiples sesiones de terminal en una sola ventana.

Algunas características clave de tmux incluyen:

1. *Sesiones:* Puedes tener múltiples sesiones de terminal en una única ventana.

2. *Paneles:* Puedes dividir la ventana en varios paneles horizontales o verticales, cada uno con su propia sesión o comando.

3. *Persistencia:* Puedes desconectarte de una sesión y luego volver a conectarte más tarde, manteniendo el estado de la sesión.

4. *Personalización:* tmux es altamente configurable y puedes personalizar la disposición de las ventanas y la apariencia según tus preferencias.

## Ejemplo de Uso:

```
sudo apt-get install tmux
```

[![40.png](https://i.postimg.cc/dtvQvxds/40.png)](https://postimg.cc/XXH6kxQm)

36. Hacer una comparación entre bash y zsh. ¿Qué ventajas tiene zsh sobre bash?

*Bash* (Bourne Again SHell) y *Zsh* (Z Shell) son intérpretes de comandos de Unix ampliamente utilizados. Ambos son poderosos y versátiles, pero hay algunas diferencias clave. Aquí hay una comparación general, destacando algunas ventajas que Zsh tiene sobre Bash:

## Similaridades:

1. *Sintaxis de Comandos:*

- Ambos Bash y Zsh comparten una sintaxis de comandos similar y muchas características básicas.

2. *Compatibilidad:*

- Muchos scripts de Bash se ejecutarán en Zsh con pocos o ningún cambio, ya que Zsh fue diseñado para ser compatible con el Bourne Shell y el Bash.

# Ventajas de Zsh sobre Bash:

1. *Autocompletado Mejorado:*

- Zsh tiene un sistema de autocompletado más avanzado y personalizable que Bash. Incluye sugerencias y autocompletado de rutas con opciones.

2. *Corrección de Errores en Tiempo Real:*

- Zsh ofrece corrección de errores en tiempo real, sugiriendo posibles correcciones mientras escribes comandos. Puedes aceptar la sugerencia con una tecla.

3. *Temas y Personalización de la Interfaz:*

- Zsh permite una personalización más avanzada y fácil de la apariencia del prompt y temas (oh-my-zsh es una popular framework para ello).

4. *Mejor Historial de Comandos:*

- El historial de comandos de Zsh es más avanzado, permitiendo una búsqueda más eficiente y opciones de manipulación del historial.

5. *Completado de Argumentos y Opciones:*

- Zsh proporciona completado de argumentos y opciones de comandos de una manera más inteligente y avanzada.

6. *Expansiones de Parámetros:*

- Zsh tiene expansiones de parámetros más poderosas y flexibles.

7. *Conjuntos de Características Avanzadas:*

- Zsh tiene muchas características avanzadas, como la programación de notificaciones cuando un comando largo ha terminado.

8. *Mejor Soporte para UTF-8:*

- Zsh tiene mejor soporte para caracteres Unicode y UTF-8 en comparación con Bash.

9. *Plug-ins y Frameworks:*

- Zsh tiene frameworks como oh-my-zsh que facilitan la instalación de complementos y temas.

# Consideraciones Finales:

La elección entre Bash y Zsh a menudo se reduce a las preferencias personales y al entorno de trabajo. Mientras que Bash es el intérprete de comandos predeterminado en muchas distribuciones de Linux y es más común en scripts y configuraciones de sistemas, Zsh es conocido por su potencia y funcionalidades adicionales para los usuarios interactivos.

Si estás acostumbrado a Bash y estás satisfecho con su rendimiento, es posible que no necesites cambiar a Zsh. Sin embargo, si buscas características avanzadas, autocompletado mejorado y una experiencia interactiva más rica, Zsh podría ser una excelente opción. Muchos usuarios encuentran que la transición a Zsh, especialmente con marcos como oh-my-zsh, mejora su eficiencia y experiencia de línea de comandos.


37. Cuál es el sistema de archivos usado en cada partición del disco de almacenamiento y cuál es su tamaño asignado, usado y libre.

```
df -h
```

[![41.png](https://i.postimg.cc/bwhmm1KF/41.png)](https://postimg.cc/Wh5m3qpM)

38. Investigue qué es un pipe (|), para qué sirve y escriba al menos 3 ejemplos de su uso.

Un pipe (|) es un operador en sistemas basados en Unix y en la línea de comandos que se utiliza para canalizar la salida de un comando como entrada a otro. En otras palabras, toma el resultado de un comando y lo pasa como entrada al siguiente comando, permitiendo la combinación de varios comandos en una secuencia.

La sintaxis básica es:

```
comando1 | comando2
```

# Ejemplos de Uso

1. *Filtrado de Resultados:*

```
ls -l | grep ".txt"
```

2. *Conteo de Resultados:*

```
cat archivo.txt | wc -l
```

3. *Ordenación de Resultados:*

```
ps aux | sort -nk 3
```

[![42.png](https://i.postimg.cc/LXLqQZdN/42.png)](https://postimg.cc/FdFs7zHL)

39. Ejecute el comando top que permita monitorizar únicamente los procesos por un determinado ID.

[![43.png](https://i.postimg.cc/Qxxt1zM6/43.png)](https://postimg.cc/Z024hVp3)

40. Investigar cómo se puede programar la ejecución de un script dentro del sistema, a una hora y fecha específica. Haga un ejemplo en su máquina virtual. 

Para programar la ejecución de un script en un momento específico, puedes utilizar la herramienta cron en sistemas basados en Unix, como Linux. cron es un servicio de programación de tareas que permite a los usuarios ejecutar comandos o scripts automáticamente en momentos específicos, como horas del día, días de la semana, etc.

## Pasos para Programar un Script con `cron`:

1. *Abrir el Editor de Cron:*

Puedes editar las tareas programadas del cron utilizando el comando `crontab -e`. Esto abrirá el archivo cron en el editor predeterminado.

```
crontab -e
```

2. *Especificar el Momento de Ejecución:*

Añade una línea al archivo crontab especificando cuándo quieres que se ejecute tu script. Por ejemplo, para ejecutar el script todos los días a las 8:30 AM, puedes añadir:

```
30 8 * * * /ruta/al/your_script.sh
```
- El primer número (30) especifica los minutos.
- El segundo número (8) especifica la hora.
- El asterisco (*) significa "todos los días del mes".
- Otro asterisco significa "todos los meses".
- El último asterisco significa "todos los días de la semana".

Puedes ajustar estos valores según tus necesidades.

3. *Guardar y Salir:*

Guarda y cierra el editor para aplicar los cambios.

4. *Verificar las Tareas Programadas:*

Puedes ver las tareas programadas de tu usuario con el siguiente comando:

```
crontab -l
```

## Ejemplo

1. Creamos un script myscript.sh:

```
nano myscript.sh
```

y agregamos lo siguiente:

```
#!/bin/bash

# Ruta al archivo de registro
LOG_FILE="/ruta/del/registro.txt"

# Mensaje a imprimir en el registro
echo "Ejecutando myscript.sh a las $(date)" >> "$LOG_FILE"

# Coloca aquí el resto de tu lógica de script...
# Por ejemplo:
# comando1
# comando2
```

3. Permisos de ejecución al script:

```
chmod +x myscript.sh
```

4. Abrimos el editor de crontab:

```
crontab -e
```

5. Añadimos la línea para ejecutar tu script a las 8:30 AM todos los días:

```
30 8 * * * /ruta/al/myscript.sh
```

6. Guarda y cierra el editor de crontab.

- Ahora,`myscript.sh` se ejecutará todos los días a las 8:30 AM y registrará un mensaje en el archivo especificado. Puedes personalizar el script según lo que necesites que haga en realidad.

[![44.png](https://i.postimg.cc/rm0HBMgh/44.png)](https://postimg.cc/qhrQnfPn)

- Y terminamos creando la ejecución

[![45.png](https://i.postimg.cc/LX1yyv6w/45.png)](https://postimg.cc/N9Q7F6Xk)











 

