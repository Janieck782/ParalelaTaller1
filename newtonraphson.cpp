#include "funciones.h"
#include <cmath>

void newtonraphson(int n, double *f, double *fd, double x, int &contador){
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
