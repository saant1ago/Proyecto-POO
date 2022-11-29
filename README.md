# Proyecto-POO
Proyecto para Programación Orientada a Objetos en C++

#Contexto

El equipo de futbol americano de la universidad esta por empezar una nueva temporada, sin embargo varios jugadores se fueron del equipo debido a que ya terminaron sus estudios y por ende, su estancia en el equipo ya no es permitida. Esto ha llevado a los coaches a buscar nuevos jugadores. Este proyecto crea una pequeña plataforma en donde los coaches podrán consultar a los mejores prospectos para el equipo así como agregar otro tipo de jugadores. 

#Funcionalidad 

La plataforma separa a los jugadores nacionales,internacionales y novatos. Esto es debido a que a los jugadores nacionales e internacionales se les tiene que dar contratos para que jueguen y a los novatos se les tiene que dar una colegiatura. Así mismo, cada jugador es tiene una calificación que se mide con estrellas del 1 al 5. La plataforma podrá mostrar el equipo completo, a los jugadores nacionales, internacionales y novatos que lo componen, el promedio de estrellas del equipo así como el promedio de la edad. También se podrán consultar los gastos y la lista de jugadores lastimados. También se pueden agregar jugadores.

#Cambios entrega #2

Se agregó el diagrama ULM demostrando de manera sencilla los atributos y métodos de cada clase, así como las herencias y composiciones. Así mismo se corrigió el código para agregar los contratos a los jugadores novatos y nacionales para darle coherencia con el ULM. Nota: Todavía no esta implementada la herencia ni composición en el código, así como la clase equipo, sin embargo ya esta implementada en el ULM para agregarlo al código en la próxima entrega.

#Cambios entrega #3

Se agregó el parámetro de lastimado. Así mismo se agregó el método para la lista de lastimados. Se implementó la clase equipo la cual contiene los objetos de jugadores creados. Así mismo se agregaron y corrigieron los métodos para que tuvieran sentido con el objetivo del programa. Se modificó el diagrama de UML para que tuviera coherencia con el proyecto

Sub-competencias a evaluar y donde encontrar la evidencia 

Toma de decisiones
SICT0302A

- Diagrama UML (ProyectoUML.png)


Implementa SICT0303A

-Linea 51, 304, 315, 325 equipo.h (Composición)
-Línea 62, 109 155 Jugadores.h (Herencia)
-Línea 24,25,26,27 Jugadores.h (Encapsulamiento)
-Línea 31,32,72,73,120,121 (Constructores)
-Línea 34,35,36,37,76,77,78,79 (getters y to string)

Estándares   SICT0401A

Se puede observar una estructura ordenada en todo el programa así como se utilizaron comentarios para explicar ciertas partes del código

En este readme se puede encontrar un resumen del proyecto así como su funcionalidad, los cambios y como compilar

Tecnologías  SEG0702A

Se usó correctamente github subiendo cada semana las versiones corregidas de los archivos



#Para compilar
Para compliar en Mac compilar el archivo ProyectoRoster.cpp (g++ ProyectoRoster.cpp) y luego ejecutar el archivo generado (./a.out)
*Descargar los archvios y asegurarse de que todos esten en la misma carpeta para asegurar el correcto funcionamento*
