# Mini analizador sintáctico c++

Este proyecto es capaz de validar si una cadena de caracteres (cadena1 en la línea 45 ó 46 del código) es sintácticamente correcta, ya que separa la cadena por tokens.
Cada token viene diferenciado por un tipo, los cuales se iteran dentro de una tabla de reglas gramaticales (función: tabla1 dentro de la cabecera tabla.h) <br>
El programa es capaz de apilar cada token junto con su salida y desapilarlo cuando la entrada sea '$'
En este ejemplo utilizamos la entrada "hola + mundo"

![image](https://user-images.githubusercontent.com/80979314/187588035-829b1b9f-2636-4a8a-b3a2-33169828ad41.png)

En este segundo ejemplo la entrada será: "a + b + c + d + e + f", únicamente es necesario comentar la cadena que se utilizó en el ejemplo anterior y elegir la tabla que contiene la segunda gramática (tabla2)

![image](https://user-images.githubusercontent.com/80979314/187588375-62b0c8ea-5c39-4e4a-9faf-adfd723fb984.png)
