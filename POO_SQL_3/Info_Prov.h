#pragma once
#include <iostream>
using namespace std;

class Info_Prov{
	// atributos
protected: 
		string proveedor, nit, direccion;
		int telefono=0;
		 // costructor
protected:
	Info_Prov() {
	}
	Info_Prov(string prov, string n, string dir, int tel) {
		proveedor = prov;
		nit = n;
		direccion = dir;
		telefono = tel;
	}
	void leer();	
	void crear();
	void modificar();
	void eliminar();
};

