#include <string>
#include "Montacargas.h"

Montacargas::Montacargas(float pesoDeLaCargaMaxima) {

    if (pesoDeLaCargaMaxima <= 0) {

        throw std::string("La carga máxima de un montacargas debe ser mayor a 0");
    }

    this->cargaMaximaSoportada = pesoDeLaCargaMaxima;
    this->carga = 0.0;
    this->cargaAcumuladas = 0.0;
    this->cargasRealizadas = 0;
}

float Montacargas::obtenerCargaMaximaSoportada() {

    return this->cargaMaximaSoportada;
}

float Montacargas::obtenerCarga() {

    return this->carga;
}

void Montacargas::cargar(float unaCarga) {

    if (! this->estaCargado() &&
        (unaCarga > 0) &&
        (unaCarga <= cargaMaximaSoportada)) {

        this->carga = unaCarga;
    }
}

bool Montacargas::estaCargado() {

    return (this->carga > 0);
}

void Montacargas::descargar() {

    if (this->estaCargado()) {

        this->cargaAcumuladas += carga;
        this->carga = 0;
        this->cargasRealizadas++;
    }
}

float Montacargas::obtenerCargaPromedio() {

    float cargaPromedio = 0;

    if (this->cargasRealizadas > 0) {

        cargaPromedio = this->cargaAcumuladas / this->cargasRealizadas;
    }

    return cargaPromedio;
}
