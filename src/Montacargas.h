#ifndef MONTACARGAS_H_
#define MONTACARGAS_H_

#include "Lista.h"

/**
 * Un Montacargas es herramienta que permite cargar y descargar cargas.
 *
 * El Montacargas puede soportar cargas de hasta cierto peso especificado
 * en su construcción.
 *
 * En todo momento el Montacargas está con carga o sin carga.
 *
 */
class Montacargas {

    private:

        float cargaMaximaSoportada;

        float carga;

        Lista<float>* cargasRealizadas;

    public:

        /*
         * pre : 'pesoDeLaCargaMaxima' es un valor mayor a cero.
         * post: Montacargas sin carga, listo para cargar hasta
         *       'pesoDeLaCargaMaxima' [Kg].
         */
        Montacargas(float pesoDeLaCargaMaxima);

        /*
         * post: devuelve el peso máximo [Kg] que el Montacargas
         *       puede cargar.
         */
        float obtenerCargaMaximaSoportada();

        /*
         * post: devuelve la carga actual [Kg]
         */
        float obtenerCarga();

        /*
         * pre : no está cargado y 'unaCarga' es un valor mayor a cero y
         *       menor a obtenerCargaMaximaSoportada().
         * post: coloca 'unaCarga' [Kg] en el Montacargas.
         */
        void cargar(float unaCarga);

        /*
         * post: devuelve si el Montacargas actualmente está cargado.
         */
        bool estaCargado();

        /*
         * pre : está cargado.
         * post: retira la carga del Montacagas.
         */
        void descargar();

        /*
         * post: devuelve el peso [Kg] promedio de las cargas completadas,
         *       es decir que fueron cargadas y descargadas.
         */
        float obtenerCargaPromedio();

        /*
         * post: devuelve la cantidad de veces que se cargo y descargó
         *       una carga cuyo peso [Kg] superó 'cargaDeReferencia'.
         *
         */
        unsigned int contarCargasRealizadasQueSuperan(float cargaDeReferencia);

        /*
         * post: libera los recursos asociados a la instancia.
         */
        ~Montacargas();

    private:

        /*
         * post: lanza una excepción si unaCarga es un valor inválido.
         */
        void validarCarga(float unaCarga);
};

#endif /* MONTACARGAS_H_ */
