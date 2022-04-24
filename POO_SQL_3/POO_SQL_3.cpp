// POO_SQL_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma once
#include <iostream>
#include "Proveedor.h"
using namespace std;

int main() {
	string prov, nit, dir;
	int idpro, tel;

	cout << "Ingrese ID del proveedor:";
	cin >> idpro;
	cout << "Ingrese proveedor:";
	cin >> prov;
	cout << "Ingrese nit:";
	cin >> nit;
	cout << "Ingrese Direccion:";
	cin >> dir;
	cout << "Ingrese Telefono:";
	cin >> tel;

	// instancia de un objeto
	Proveedor obj = Proveedor(idpro, prov, nit, dir, tel);
	obj.crear();
	obj.leer();
	cout << "Modificar ID del proveedor:";
	cin >> idpro;
	cout << "Modificar proveedor:";
	cin >> prov;
	cout << "Modificar nit:";
	cin >> nit;
	cout << "Modificar Direccion:";
	cin >> dir;
	cout << "Modificar Telefono:";
	cin >> tel;

	obj.setIDProveedor(idpro);
	obj.setProveedor(prov);
	obj.setNit(nit);
	obj.setDireccion(dir);
	obj.setTelefono(tel);

	obj.modificar();
	obj.leer();

	cout << "Eliminar ID del proveedor:";
	cin >> idpro;

	obj.eliminar();
	obj.leer();

	system("pause");
	return 0;

}
