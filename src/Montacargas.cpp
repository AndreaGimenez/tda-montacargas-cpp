#include <string>
#include "Montacargas.h"

Montacargas::Montacargas(float pesoDeLaCargaMaxima) {

    if (pesoDeLaCargaMaxima <= 0) {

        throw std::string("La carga máxima debe ser mayor a 0");
    }

    this->cargaMaximaSoportada = pesoDeLaCargaMaxima;
    this->carga = 0.0;
    this->cargasRealizadas = new Lista<float>;
}

float Montacargas::obtenerCargaMaximaSoportada() {

    return this->cargaMaximaSoportada;
}

float Montacargas::obtenerCarga() {

    return this->carga;
}

void Montacargas::cargar(float unaCarga) {

    this->validarCarga(unaCarga);

    this->carga = unaCarga;
}

bool Montacargas::estaCargado() {

    return (this->carga > 0);
}

void Montacargas::descargar() {

    if (this->estaCargado()) {

        this->cargasRealizadas->agregar(this->carga);

        this->carga = 0;
    }
}

float Montacargas::obtenerCargaPromedio() {

    float cargaTotal = 0;

    this->cargasRealizadas->iniciarCursor();
    while (this->cargasRealizadas->avanzarCursor()) {

        cargaTotal += this->cargasRealizadas->obtenerCursor();
    }

    return this->cargasRealizadas->estaVacia() ?
            0 : (cargaTotal / this->cargasRealizadas->contarElementos());
}

void Montacargas::validarCarga(float unaCarga) {

    if (this->estaCargado()) {
        throw std::string("No se puede cargar un montacargas ya cargado");
    }

    if (unaCarga <= 0) {
        throw std::string("No se puede cargar una carga menor o igual a cero");
    }

    if (unaCarga > cargaMaximaSoportada) {
        throw std::string("No se puede cargar una carga que supera el máximo");
    }
}

unsigned int
    Montacargas::contarCargasRealizadasQueSuperan(float cargaDeReferencia) {

    unsigned int cargasQueSuperaronLaCargaDeReferencia = 0;

    this->cargasRealizadas->iniciarCursor();
    while (this->cargasRealizadas->avanzarCursor()) {

        float unaCargaRealizada = this->cargasRealizadas->obtenerCursor();

        if (unaCargaRealizada > cargaDeReferencia) {
            cargasQueSuperaronLaCargaDeReferencia++;
        }
    }

    return cargasQueSuperaronLaCargaDeReferencia;
}

Montacargas::~Montacargas() {

    delete this->cargasRealizadas;
}









