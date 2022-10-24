# Mostrar árbol sintáctico

En este programa debemos ingresar la siguiente entrada: <br>

![image](https://user-images.githubusercontent.com/80979314/197575861-59f026ae-db33-4e55-9a8f-029a6867712c.png)


Y el programa deberá ser capaz de mostrar el árbol donde se puede ver a qué tipo de regla pertenece cada variable y en qué contexto pertenece <be>

- Ingresamos la entrada:
  
  ![image](https://user-images.githubusercontent.com/80979314/197601400-17a7d141-c7e5-421a-8c9c-734ad685f8ee.png)

  Y el programa lo pondrá en una interfaz gráfica con la ayuda de la librería TKinter.
  
- Analizador léxico:
  
  ![image](https://user-images.githubusercontent.com/80979314/197601694-ca0cc864-487a-4046-a30b-8eb472626298.png)

- Analizador sintáctico:
  
  ![image](https://user-images.githubusercontent.com/80979314/197601778-3e24c2d9-58b3-4859-a7aa-ff3b979a2b78.png)

  Podemos observar que la pila hace correctamente las inserciones y las reducciones. <br>
  Por último observamos que la pila llega al estado de aceptación: <br>
  
  ![image](https://user-images.githubusercontent.com/80979314/197602132-8e57e0e6-d711-4d2c-96aa-7adceda7a20f.png)

  - Ahora, mostramos el árbol: <br>
    Podemos observar que reconoce a "a" y a "b" como identificadores dentro del contexto de la función "suma"
  
  ![image](https://user-images.githubusercontent.com/80979314/197602956-3873234c-c8b7-494c-b76e-a8a5d51adde6.png)

    Y reconoce a "a", "b" y "c" dentro del contexto "main"
  
  ![image](https://user-images.githubusercontent.com/80979314/197603319-2131398d-63a6-4a37-ba62-f35ccf2da5eb.png)
  
    Por último reconoce a la primer "a" de contexto global
  
  ![image](https://user-images.githubusercontent.com/80979314/197603529-698be67e-32c6-4cac-b4aa-11b82ee828f9.png)

