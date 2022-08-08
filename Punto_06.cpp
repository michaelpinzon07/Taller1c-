#include <stdio.h>
#include <iostream>

main(){
    int a;
    int b;
    int c;
    int cont;
    int suma;

    std::cout << "Digite un numero a: ";
    std::cin >> a;
    
    
    std::cout << "Digite un numero b: ";
    std::cin >> b; 

    if(a >0){
      if (b>0)
      {  
        if(a<b){
           for(int i = a; i<=b; i++){
            if(i%5==0){
                
                cont++;
                suma+=i;

            }
           }
        }
        else{
            
            c=a;
            a=b;
            b=c;
            for(int i = a; i<=b; i++){
            if(i%5==0){
                
                cont++;
                suma+=i;

            }

           }
        }
      }
    }
    std::cout << "cantidad multiplos de 5: "<< cont << std::endl;
    std::cout << "suma: "<< suma << std::endl;


}