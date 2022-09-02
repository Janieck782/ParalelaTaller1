#include "funciones.h"

void derivada(int n, double *f, double *fd){
    int i;
    for (i = n; i > 0; i--){
        fd[i-1] = i * f[i];
    }
}
