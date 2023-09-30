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



