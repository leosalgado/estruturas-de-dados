#include "main.h"

int main(){
    double x, y;

    scanf("%lf%lf", &x, &y);
    printf("%lf", dist_ponto(x, y));
    
    return 0;
}

double dist_ponto(double x, double y){
    double r;
    r = sqrt(pow(x,2) + pow(y,2));
    return r;
}