#include "Controlador.hpp"
using namespace std;

Controlador::Controlador()
{
    srand(time(nullptr));
    siguienteIdApendicitis = 1;
    siguienteIdHernia = 51;
}

Controlador::~Controlador()
{

}

int Controlador::pacientesEnPila()
{
    return pila.mostrarCantidad();
}

int Controlador::pacientesEnSalaA()
{
    return colaA.mostrarCantidad();
}
int Controlador::pacientesEnSalaB()
{
    return colaB.mostrarCantidad();
}

int Controlador::pacientesEnSalaC()
{
    return colaC.mostrarCantidad();
}
int Controlador::pacientesEnSalaD()
{
    return colaD.mostrarCantidad();
}


void Controlador::pacientesEnListaApendicitis()
{
    cout << "Sala A:" <<endl;
    colaA.mostrar();
    cout << endl;
    cout << "Sala B:" <<endl;
    colaB.mostrar();
}
void Controlador::pacientesEnListaHernias()
{
    cout << "Sala C:" <<endl;
    colaC.mostrar();
    cout << endl;
    cout << "Sala D:" <<endl;
    colaD.mostrar();
}
//void Controlador::pacientesEnArbol();

void Controlador::generar12Pacientes()
{
    if (pila.mostrarCantidad() >= 48)
        cout << "Pila llena, cantidad: " << pila.mostrarCantidad() << endl;
    else
        for (int i = 0; i < 12; i++)
        {
            Persona p = Persona();
            pila.insertar(p);
        }
}
void Controlador::muestraPacientes()
{
    pila.mostrar();
}
void Controlador::borraPacientesPila()
{
    while (pila.mostrarCantidad() > 0)
        pila.eliminar();
}
void Controlador::encolarPacientes()
{
    while (pila.mostrarCantidad())
    {
        Persona persona = pila.eliminar();
        if (persona.getEstado())
        {
            persona.setId(siguienteIdApendicitis);
            persona.setHabitacion(siguienteIdApendicitis);
            siguienteIdApendicitis++;
            if (colaA.mostrarCantidad() <= colaB.mostrarCantidad())
            {
                colaA.insertar(persona);
            }
            else
            {
                colaB.insertar(persona);
            }
        }
        else
        {
            persona.setId(siguienteIdHernia);
            persona.setHabitacion(siguienteIdHernia);
            siguienteIdHernia++;
            if (colaC.mostrarCantidad() <= colaD.mostrarCantidad())
            {
                colaC.insertar(persona);
            }
            else
            {
                colaD.insertar(persona);
            }
        }
    }
}
void Controlador::muestraPacientesSalasAyB()
{
    cout << "Sala A:" << endl;
    colaA.mostrar();
    cout << endl;
    cout << "Sala B:" << endl;
    colaB.mostrar();
}
void Controlador::muestraPacientesSalasCyD()
{
    cout << "Sala C:" << endl;
    colaC.mostrar();
    cout << endl;
    cout << "Sala D:" << endl;
    colaD.mostrar();
}
void Controlador::borraPacientesColas()
{
    while (colaA.mostrarCantidad() || colaB.mostrarCantidad() || colaC.mostrarCantidad() || colaD.mostrarCantidad())
    {
        colaA.eliminar();
        colaB.eliminar();
        colaC.eliminar();
        colaD.eliminar();
    }
}
//void Controlador::enlistarPacientes();
//void Controlador::muestraPacientesApendicitis();
//void Controlador::muestraPacientesHernias();
//void Controlador::buscarPacientes();
//void Controlador::reiniciar();