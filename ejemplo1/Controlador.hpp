#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include "pila/Pila.hpp"
#include "cola/Cola.hpp"
#include "persona/persona.hpp"

class Controlador
{
    public:
        Controlador();
        ~Controlador();
        int pacientesEnPila();
        int pacientesEnSalaA();
        int pacientesEnSalaB();
        int pacientesEnSalaC();
        int pacientesEnSalaD();
        void pacientesEnListaApendicitis();
        void pacientesEnListaHernias();
        //pacientesEnArbol();

        void generar12Pacientes();
        void muestraPacientes();
        void borraPacientesPila();
        void encolarPacientes();
        void muestraPacientesSalasAyB();
        void muestraPacientesSalasCyD();
        void borraPacientesColas();
        //enlistarPacientes();
        //muestraPacientesApendicitis();
        //muestraPacientesHernias();
        //buscarPacientes();
        //reiniciar();
    private:
        Cola colaA;
        Cola colaB;
        Cola colaC;
        Cola colaD;
        Pila pila;
        int siguienteIdApendicitis;
        int siguienteIdHernia;
};

#endif