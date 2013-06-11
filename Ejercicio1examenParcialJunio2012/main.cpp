//
//  main.cpp
//  Ejercicio1examenParcialJunio2012
//
//  Created by Daniel on 11/06/13.
//  Copyright (c) 2013 Daniel. All rights reserved.
//

#include <iostream>
#include "Cola.h"
#include "Arbus.h"

using namespace std;

int siguienteClave(int clave, Arbus<int, int> arbol) {
    
    return arbol.siguienteClave(clave);
}

int siguienteClaveConMayor(int clave, Arbus<int, int> arbol) {
    
    return arbol.siguienteClaveConMaximoIgual(clave);
}

int main(int argc, const char * argv[])
{

    Arbus<int, int> arbol;
    
    arbol.inserta(8, 1);
    arbol.inserta(10, 1);
    arbol.inserta(9, 1);
    arbol.inserta(11, 1);
    arbol.inserta(5, 1);
    arbol.inserta(6, 1);
    arbol.inserta(7, 1);
    arbol.inserta(4, 1);
    
    int clave = 9;
    
    cout << "Siguente clave a " << clave << " : " << siguienteClave(clave, arbol) << " Función con calve NULL al inicio" << endl;
    cout << "Siguente clave a " << clave << " : " << siguienteClaveConMayor(clave, arbol) << " Función con la clave mayor al inicio";
    
    return 0;
}

