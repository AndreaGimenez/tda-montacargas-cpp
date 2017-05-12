#ifndef MONTACARGAS_H_
#define MONTACARGAS_H_

/**
 * Un Montacargas es ...
 */
class Montacargas {

    private:

        float cargaMaximaSoportada;

        float carga;

        unsigned int cargasRealizadas;

        float cargaAcumuladas;

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
         * pre : no está cargado y 'unaCarga' es un valor mayor a cero.
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

};

#endif /* MONTACARGAS_H_ */
