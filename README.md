Algoritmos y Programación 2 - FI UBA

# TDA: Montacargas

## Enunciado

<img src="https://upload.wikimedia.org/wikipedia/commons/2/2a/Forklift_Truck-blank.svg" height="144">

1. Diseñar e implementar un TDA que modele un Montacargas con las siguientes operaciones:

* crear el Montacargas recibiendo como parámetro el peso máximo (Kg) que puede cargar. 

* obtenerCarga: devuelve el peso (Kg) de la carga que tiene actualmente.

* cargar: sube al montacargas una carga con el peso (Kg) indicado.

* descargar: baja del montacargas toda la carga que tiene.

* obtenerCargaPromedio: devuelve el peso (Kg) promedio de las cargas completadas 
 (cargadas y luego descargadas)
 
2. Implementar la operación:

```C++
        /*
         * post: devuelve la cantidad de veces que se cargo y descargó
         *       una carga cuyo peso [Kg] superó 'cargaDeReferencia'.
         *
         */
        unsigned int contarCargasRealizadasQueSuperan(float cargaDeReferencia);
```

3. Proporcione un ejemplo de uso de la clase.

### Solución

#### Punto 1

`Montacargas.h` [ver](../punto-01/src/Montacargas.h)

`Montacargas.cpp` [ver](../punto-01/src/Montacargas.cpp)

#### Punto 2

`Montacargas.h` [ver](../punto-02/src/Montacargas.h)

`Montacargas.cpp` [ver](../punto-02/src/Montacargas.cpp)

#### Punto 3

`main.cpp` [ver](../punto-03/src/main.cpp)
