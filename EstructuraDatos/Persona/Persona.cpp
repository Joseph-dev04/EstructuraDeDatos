#include "Persona.hpp"
#include <cstdlib>
#include <cstdio>
#include <iostream>

Persona::Persona(int edad)
{
	this->edad = edad;
	this->genero = rand() % 2;
	this->generarDniAutomatico();
}

void Persona::generarDniAutomatico()
{
	int numeroDni = 10000000 + rand() % 90000000;
	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	char letrasDni = letras[numeroDni % 23];
	sprintf(this->dni, "%08d%c", numeroDni, letrasDni);
}

int Persona::getEdad()
{
	return this->edad;
}

bool Persona::esMujer()
{
	return this->genero;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

void Persona::mostrar()
{
	cout << "DNI: " << this->dni 
         << " | Genero: " << (this->genero ? "Mujer" : "Hombre") 
         << " | Edad: " << this->edad << " anos" << endl;
}

Persona::~Persona()
{
	
}