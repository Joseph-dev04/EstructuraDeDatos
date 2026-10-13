#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include "pila/Pila.hpp"
#include "cola/Cola.hpp"
#include "lista/lista.hpp"
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
        int pacientesEnListaApendicitis();
        int pacientesEnListaHernias();
       
        //pacientesEnArbol();

        void generar12Pacientes();
        void muestraPacientes();
        void borraPacientesPila();
        void encolarPacientes();
        void muestraPacientesSalasAyB();
        void muestraPacientesSalasCyD();
        void borraPacientesColas();
        void enlistarPacientes();
        void enlistarPacientes2();
        void muestraPacientesApendicitis();
        void muestraPacientesHernias();
        void buscarPacientes();
        void reiniciar();
    private:
        Cola colaA;
        Cola colaB;
        Cola colaC;
        Cola colaD;
        Pila pila;
        Lista listaApendicitis;
        Lista listaHernias;
        int siguienteIdApendicitis;
        int siguienteIdHernia;
};

#endif