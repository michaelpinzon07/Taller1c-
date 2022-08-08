#include <iostream>
#include <stdio.h>

int dia , mes , año, suma;
int y,z;

void fecha(){
    
    std::cout<<"Ingrese dia de nacimiento : ";
    std::cin >> dia;
    std::cout<<"Ingrese mes de nacimiento : ";
    std::cin >> mes;
    std::cout<<"Ingrese año de nacimiento : ";
    std::cin>>año;
    std::cout<<"\n";

}

void tarot(){
    if (dia>0 && dia<=31)
        if(mes>0 && mes <=12)
            if (año>1900 && año<=2022)
            {
                suma=dia+mes+año;
                y=(suma%10)+((suma/10)%10)+((suma/100)%10)+(suma/1000);
                z=(y%10)+(y/10);
                std::cout<<"su numero tarot es :"<<z<<std::endl;
            }
            
}

int main(){
    fecha();
    tarot();
    return 0;
}