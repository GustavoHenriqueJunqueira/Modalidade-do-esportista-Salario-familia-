//
//  main.cpp
//  Exercicio 33
//
//  Created by Gustavo Henrique Furtado Junqueira on 12/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){
    
    string nome;
    int idade;
    float renda_familia;
    
    cout<<"Digite o nome do esportista:\n";
    cin>>nome;
    cout<<"Digite a idade do esportista:\n";
    cin>>idade;
    cout<<"Digite a resnda salarial da familia\n";
    cin>>renda_familia;
    
    if (idade<=15) {
        cout<<"Esportista infantil\n";
    }
    else if (idade>=16 && idade<=18){
        cout<<"Espostista Juvenil\n";
    }
    else if (idade>18){
        cout<<"Esportista adulto\n";
        
    }
    if(renda_familia<=1000.00){
    cout<<"A renda da familia é média baixa.\n";
    }

    else if (renda_familia>1000.01 && renda_familia <=3500.00){
    cout<<"A renda da familia é média.\n";
    }
    else if (renda_familia>3500.00){
    cout<<"A renda da familia é média alta.\n";
        
    }


    return 0;
    


}

