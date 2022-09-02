#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string poli;
    int grado,i,contador=0;
    double inicio;

    cout << "Ingrese un polinomio: ";
    cin >> poli;

    grado = poli[4] - '0';

    double *coef, *dcoef;
    coef = new double [grado+1];
    dcoef = new double [grado];

    string aux_grado;
    int cont=grado;

    for(i=0; i<poli.length(); i=i+5){
        aux_grado="";
        aux_grado.append(1,poli[i]);
        aux_grado.append(1,poli[i+1]);
        coef[cont]=stoi(aux_grado);
        cont--;
    }

    derivada(grado, coef, dcoef);

    cout << "\nIntroduzca el valor de inicio para la raiz: ";
    cin >> inicio;

    newtonraphson(grado,coef,dcoef,inicio,contador);

    cout << "\nLa raiz solucion aproximada es x = " << inicio;
    cout<< "\n\n === Integrantes === "<<"\nLuciano Donoso Montero"<<"\nJean Sandoval Castro"<<"\nEsteban Quezada Paredes\n";

    return 0;
}
