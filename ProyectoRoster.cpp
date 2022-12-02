//
//  Proyecto Roster.cpp
//  ProyectoA01705439
//
//  Created by Santiago Juarez Roaro on 08/11/22.
//

#include <iostream>
#include "Jugadores.h"
#include "equipo.h"
using namespace std;

void menu(){
    
    //Creamos la función menu para mostrar al usuario las diferentes opciones
    cout << "Menu:"<<endl;
    cout << "1. Mostrar Equipo"<<endl;
    cout << "2. Mostrar jugadores nacionales"<<endl;
    cout << "3. Mostrar jugadores internacionales"<<endl;
    cout << "4. Mostrar jugadores novatos"<<endl;
    cout << "5. Calcular gastos en contratos"<<endl;
    cout << "6. Calcular gastos en becas"<<endl;
    cout << "7. Mostrar jugadores prospectos"<<endl;
    cout << "8. Calcular promedio de estrellas del equipo"<<endl;
    cout << "9. Calcular promedio de edad del equipo"<<endl;
    cout << "10. Mostrar jugadores lastimados"<<endl;
    cout << "11. Agregar jugadores nacional"<<endl;
    cout << "12. Agregar jugadores internacional"<<endl;
    cout << "13. Agregar jugadores novato"<<endl;
    cout << "14. Salir"<<endl;
    
}

int main(){
    
    
    //Creamos el objeto equipo
    equipo equipo;
    
    //Llenamos las listas
    equipo.preRoster();
    
    //Variables para guardar los inputs
    string n;
    int e,c,a,opcion=0;
    float es;
    bool l;
    
    while(opcion < 14 && opcion > -1){ //Ciclo while que hace que permite que el usuario pueda elejir multiples opciones
        
        menu();
        cin>>opcion;
        
        
        //Switch para que se corra la función que haya elegido el usuario
        switch (opcion) {
            case 1:
                equipo.mostrarEquipo();
                break;
            case 2:
                equipo.mostrarNacionales();
                break;
            case 3:
                equipo.mostrarInternacionales();
                break;
            case 4:
                equipo.mostrarNovatos();
                break;
            case 5:
                equipo.mostrarGastosCont();
                break;
            case 6:
                equipo.mostrarGastosCol();
                break;
            case 7:
                equipo.mostrarProspect();
                break;
            case 8:
                equipo.mostrarPromEst();
                break;
            case 9:
                equipo.mostrarPromEd();
                break;
            case 10:
                equipo.mostrarLast();
                break;
            case 11:
                //Le pedimos al usuario la información del jugador que desea agregar y las guardamos en las variables
                cout<<"Nombre del jugador"<<endl;
                cin>>n;
                cout<<"Edad del jugador"<<endl;
                cin>>e;
                cout<<"Estrellas del jugador"<<endl;
                cin>>es;
                cout<<"Lastimado (1=si   0=no)"<<endl;
                cin>>l;
                cout<<"Cuanto se le va a pagar por año (contrato)"<<endl;
                cin>>c;
                cout<<"Por cuantos años es el contrato"<<endl;
                cin>>a;
                
                equipo.agregaNac(n, e, es, l, c, a);
                break;
                
            case 12:
                //Le pedimos al usuario la información del jugador que desea agregar y las guardamos en las variables
                cout<<"Nombre del jugador"<<endl;
                cin>>n;
                cout<<"Edad del jugador"<<endl;
                cin>>e;
                cout<<"Estrellas del jugador"<<endl;
                cin>>es;
                cout<<"Lastimado (1=si   0=no)"<<endl;
                cin>>l;
                cout<<"Cuanto se le va a pagar por año (contrato)"<<endl;
                cin>>c;
                cout<<"Por cuantos años es el contrato"<<endl;
                cin>>a;
                
                equipo.agregaInt(n, e, es, l, c, a);
                
                break;
                
            case 13:
                //Le pedimos al usuario la información del jugador que desea agregar y las guardamos en las variables
                cout<<"Nombre del jugador"<<endl;
                cin>>n;
                cout<<"Edad del jugador"<<endl;
                cin>>e;
                cout<<"Estrellas del jugador"<<endl;
                cin>>es;
                cout<<"Lastimado (1=si   0=no)"<<endl;
                cin>>l;
                cout<<"Porcentaje de beca"<<endl;
                cin>>c;
                cout<<"Cuantos años de estudio"<<endl;
                cin>>a;
                
                equipo.agregaNov(n, e, es, l, c, a);
                
                break;
        }
        
        
    }
    
    return 0;
}

