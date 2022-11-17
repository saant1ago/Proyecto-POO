//
//  Proyecto Roster.cpp
//  ProyectoA01705439
//
//  Created by Santiago Juarez Roaro on 08/11/22.
//

#include <iostream>
#include "Jugadores.h"

using namespace std;

int main(){
    
    //Creación del primer obejto de Jugador Nacional
    JugadorNacional eduardoNa("Eduardo",20,4.5,6700);
    
    cout<<"El primer jugador Nacional es "<< eduardoNa.get_nombre()<<endl;
    cout<<"Edad: "<<eduardoNa.get_edad()<<endl;
    eduardoNa.set_estrellas(4.7);//Demostración del setter
    cout<<"Estrellas: "<<eduardoNa.get_estrellas()<<" de 5.0"<<endl;
    cout<<"Costo del contrato: "<<eduardoNa.get_contrato()<<endl;
    cout<<endl;

    
    //Creacion del primer obejto de Jugador Internacional
    JugadorInternacional michaelI("Michael", 21, 4.2, 7800);
    
    cout<<"El primer jugador Internacional es "<< michaelI.get_nombre()<<endl;
    cout<<"Edad: "<<michaelI.get_edad()<<endl;
    cout<<"Estrellas: "<<michaelI.get_estrellas()<<" de 5.0"<<endl;
    michaelI.set_contrato(8200); //Demostracion del setter
    cout<<"Costo del contrato: "<<michaelI.get_contrato()<<endl;
    cout<<endl;
    
    //Creacion del primer obejto de Jugador Novato
    JugadorNovato alexisNo("Armando", 19, 3.5, 5500);
    
    alexisNo.set_nombre("Alexis"); //Demostracion del setter
    cout<<"El primer jugador Novato es "<< alexisNo.get_nombre()<<endl;
    cout<<"Edad: "<<alexisNo.get_edad()<<endl;
    cout<<"Estrellas: "<<alexisNo.get_estrellas()<<" de 5.0"<<endl;
    cout<<"Costo de la beca: "<<alexisNo.get_colegiatura()<<endl;
    cout<<endl;
    
    
    return 0;
}

