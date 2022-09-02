#include "funciones.h"

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
    
    delete[] a;
}
