# Mini analizador sintactico c++

Este proyecto es capaz de validar si una cadena de caracteres (cadena1 en la línea 45 ó 46 del código) es sintácticamente correcta, ya que separa la cadena por tokens.
Cada token viene diferenciado por un tipo, los cuales se iteran dentro de una tabla de reglas gramaticales (función: tabla1 dentro de la cabecera tabla.h) <br>
El programa es capaz de apilar cada token junto con su salida y desapilarlo cuando la entrada sea '$'
En este ejemplo utilizamos la entrada "hola + mundo"


En este segundo ejemplo la entrada será: "a + b + c + d + e + f", únicamente es necesario comentar la cadena que se utilizó en el ejemplo anterior y elegir la tabla que contiene la segunda gramática (tabla2)

![image](https://user-images.githubusercontent.com/80979314/187586754-8a2e1850-5d58-48a9-ad7e-dbc8b2040491.png)
