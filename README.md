# evalunidad3-me
evalunidad3-me created by GitHub Classroom

El codigo se baso en los ejercicios realizados en clase sobre polimorfismo, editado para concordar con el nuevo codigo dado.
Falta la manera de que la lista que contiene las letras sea visible de manera correcta, y crear las clases faltantes para que 
se pueda ver la lista en viceversa.

Tenemos:
main
IsStrategy.c
IsStrategy.h
Context.c
Context.h
ConcreteStrategyA.c
ConcreteStrategyA.h
ConcreteStrategyB.c
ConcreteStrategyB.h

Main: Esta la mayoria de funciones que utilizamos en el codigo.

Strategy: Funciona como el Animal en los ejercicios dados en clase, en donde viene siendo la herencia madre de todo el codigo y en donde se aplica el polimorfismo.

ConcreteStategys: Vienen siendo el "Gato y el pato" en el ejercicio de clase en donde se presenta por asi decirlo la opcion A y B para que el codigo lo ejecute.

Context:

Que se aplico:

En el lenguaje C# y el lenguaje C, tienen varias diferencia entre esas esta los (Data y los this) Esta cadena de carracteres funciona de manera distinta en cada uno de los lenguajes y se aplica distinto. Inclusive la forma de reservar clases cambia ya que en C# es "private".

Polimorfismo: Lo entendemos que es la creacion de dos o mas clases que heredan una superclase, como es el caso de pato y cato que son clase y heredan una superclase llamada animal (Es la clase madre por asi decirlo) y es distinta a las subclases.

Agregación: En pocas palabras indica que una clase es parte de otra clase y los elementos de esta se comparten. Se debe poner al inicio del codigo ejemplo : #include "concreteStrategyA.h"
