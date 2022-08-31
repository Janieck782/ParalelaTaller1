#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void derivada(int n, double *f, double *fd);
void newtonraphson(int n, double *f, double *fd, double &x, int &contador);
void evalua(int n, double *f, double x, double &p);

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

void derivada(int n, double *f, double *fd){
    int i;
    for (i = n; i > 0; i--){
        fd[i-1] = i * f[i];
    }
}

void newtonraphson(int n, double *f, double *fd, double &x, int &contador){
    double p=0, y1, y2, verificador, z=0;

    do{
        evalua(n,f,x,p);
        y1=p;
        evalua(n-1,fd,x,p);
        y2=p;
        x=x-y1/y2;
        verificador= fabs(x-z);
        z=x;
        contador+=1;
    }while(verificador>1e-10);
}

void evalua(int n, double *f, double x, double &p){
    int i;
    double *a;
    a = new double [n];

    for(i = n; i > -1; i--){
        a[i] = f[i];
    }

    for(i = n; i > 0; i--) {
        p = a[i] * x + a[i - 1];
        a[i - 1] = p;
    }
}
