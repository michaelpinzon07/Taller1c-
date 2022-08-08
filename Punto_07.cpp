#include <iostream>
#include <stdio.h>


double a,b,x,y;
double suma;
double valor;

void leer(){
std::cout<<"Ingrese valor de x: ";
std::cin>>x;
std::cout<<"Ingrese valor de y: ";
std::cin>>y;
std::cout<<"Ingrese valor de b: ";
std::cin>>b;
}

void serie(){
    for ( a = 0; a <= b; a++)
    {
        valor=1/(x+a*y);
        suma+=valor;
    }
    std::cout<<"el valor de la serie es :"<< suma <<std::endl;
}

int main(){
    leer();
    serie();
    return 0;
}