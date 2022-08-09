#include <iostream>
#include <stdio.h>


int main(){

int opcion,it,km,ton;

std::cout<<"1.Bicicleta"<<std::endl;
std::cout<<"2.Moto"<<std::endl;
std::cout<<"3.Coche"<<std::endl;
std::cout<<"4.Camion"<<std::endl;
std::cout<<"5.Salir"<<std::endl;
std::cout<<"\n";
std::cout<<"ingrese una opcion: ";
std::cin>>opcion;

switch (opcion)
{
case 1:
    it=100;
    std::cout<<"importe = "<<it<<std::endl;
    break;

case 2:
    std::cout<<"ingrese los kilometros recorridos: ";
    std::cin>>km;
    it=30*km;
    std::cout<<"importe = "<<it<<std::endl;
    break;

case 3:
    std::cout<<"ingrese los kilometros recorridos: ";
    std::cin>>km;
    it=30*km;
    std::cout<<"importe = "<<it<<std::endl;
    break;

case 4:
    std::cout<<"ingrese los kilometros recorridos: ";
    std::cin>>km;
    std::cout<<"ingrese las toneladas cargadas en el camion: ";
    std::cin>>ton;
    it=(30*km)+(25*ton);
    std::cout<<"importe = "<<it<<std::endl;
    break;


default:
    std::cout<<"opcion no disponible"<<std::endl;
    break;
}


return 0;
}