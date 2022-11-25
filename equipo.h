//
//  Header.h
//  ProyectoCPP
//
//  Created by Santiago Juarez Roaro on 24/11/22.
//

#ifndef equipo_h
#define equipo_h

#include <stdio.h>
#include <string>
#include <sstream>
#include "Jugadores.h"
#include <iomanip>

using namespace std;

class equipo{
    
private:
    
    JugadorNovato novatos[100];
    JugadorNacional nacionales[100];
    JugadorInternacional internacionales[100];
    
    int iNovatos,iNacionales,iInternacionales;
    
public:
    
    
    equipo():iNovatos(0),iNacionales(0),iInternacionales(0){};
    void preRoster();
    void mostrarEquipo();
    void mostrarNacionales();
    void mostrarInternacionales();
    void mostrarNovatos();
    void mostrarGastosCont();
    void mostrarGastosCol();
    void mostrarProspect();
    void mostrarPromEst();
    void mostrarPromEd();
    void mostrarLast();
    void agregaNac(string nom, int ed, float est, bool last, int cont, int año);
    void agregaInt(string nom, int ed, float est, bool last, int cont, int año);
    void agregaNov(string nom, int eda, float est, bool las, int col, int semes);
    
};

void equipo::preRoster(){
    
    
    novatos[0]= JugadorNovato("Raul",19,4.3,false,50,4);
    iNovatos++;
    novatos[1]= JugadorNovato("Adrián",21,4.0,false,30,3);
    iNovatos++;
    nacionales[0]= JugadorNacional("Pablo",20,3.8,true,20000,4);
    iNacionales++;
    nacionales[1]= JugadorNacional("Axel",22,4.7,false,27000,3);
    iNacionales++;
    internacionales[0]= JugadorInternacional("Ryan",21,4.0,true,17000,4);
    iInternacionales++;
    internacionales[1]= JugadorInternacional("Demarcus",22,4.6,true,20000,2);
    iInternacionales++;
    
}

void equipo::mostrarEquipo(){
    
    cout<<"___________Roster Actual___________"<<endl;
    cout<<endl;
    
    
    for(int i=0;i<iNovatos;i++){
        cout<<novatos[i].toString();
        cout<<endl;
    }
    
    for(int i=0;i<iInternacionales;i++){
        
        cout<<internacionales[i].toString();
        cout<<endl;
    }
    
    for(int i=0;i<iNacionales;i++){
        cout<<nacionales[i].toString();
        cout<<endl;
    }
}

void equipo::mostrarNacionales(){
    
    cout<<"________Jugadores Nacionales_______"<<endl;
    cout<<endl;
    
    for(int i=0;i<iNacionales;i++){
        cout<<nacionales[i].toString();
        cout<<endl;
    }
}

void equipo::mostrarInternacionales(){
    
    cout<<"_______Jugadores Internacionales______"<<endl;
    cout<<endl;
    
    for(int i=0;i<iInternacionales;i++){
        
        cout<<internacionales[i].toString();
        cout<<endl;
    }
}

void equipo::mostrarNovatos(){
    
    cout<<"______Jugadores Novatos__________"<<endl;
    cout<<endl;
    
    for(int i=0;i<iNovatos;i++){
        cout<<novatos[i].toString();
        cout<<endl;
    }
}

void equipo::mostrarGastosCol(){
    
    cout<<"________Gastos por colegiatura________"<<endl;
    cout<<endl;
    
    int total=0;
    
    for (int i=0; i<iNovatos; i++){
        total=total+novatos[i].get_gast();
        
    }
    cout<<"El gasto por colegiaturas tomando en cuenta que un año cuesta $250,000 es de: "<<"$"<<total<<endl;
}

void equipo::mostrarGastosCont(){
    
    cout<<"________Gastos por contratos_________"<<endl;
    cout<<endl;
    
    
    int total=0;
    
    for (int i=0; i<iNacionales; i++){
        total=total+nacionales[i].get_contrato();
    }
    
    for (int i=0; i<iInternacionales; i++){
        total= total + internacionales[i].get_contrato();
    }
    
    cout<<"El gasto total por contratos es de: "<<"$"<<total<<endl;
}

void equipo::mostrarPromEst(){
    
    cout<<"________Promedio de estrellas del equipo__________"<<endl;
    cout<<endl;
    
    int div= iNacionales+iInternacionales+iNovatos;
    float total= 0.0;
    float prom= 0.0;
    
    for (int i= 0; i<iNacionales; i++){
        
        total=total+nacionales[i].get_estrellas();
    }
    
    for (int i= 0; i<iInternacionales; i++){
        
        total=total+internacionales[i].get_estrellas();
    }
    
    for (int i= 0; i<iNovatos; i++){
        
        total=total+novatos[i].get_estrellas();
    }
    
    prom = total/div;
    
    cout<<"El promedio de estrellas del equipo actual es de: "<<fixed<<setprecision(1)<<prom<<endl;
    
    
}

void equipo::mostrarPromEd(){
    
    cout<<"______Promedio de edad del equipo________"<<endl;
    cout<<endl;
    
    int div= iNacionales+iInternacionales+iNovatos;
    float total= 0.0;
    float prom= 0.0;
    
    for (int i= 0; i<iNacionales; i++){
        
        total=total+nacionales[i].get_edad();
    }
    
    for (int i= 0; i<iInternacionales; i++){
        
        total=total+internacionales[i].get_edad();
    }
    
    for (int i= 0; i<iNovatos; i++){
        
        total=total+novatos[i].get_edad();
    }
    
    prom = total/div;
    
    cout<<"El promedio de edad del equipo actual es de: "<<fixed<<setprecision(1)<<prom<<endl;
        
}

void equipo::mostrarLast(){
    
    cout<<"_________Lista de lastimados________"<<endl;
    cout<<endl;
    
    int numlast=1;
    
    for(int i=0;i<iNovatos;i++){
        
        bool bandera= false;
        
        bandera=novatos[i].get_lastimado();
        
        if (bandera==true){
            
            
            cout<<"Lastimado #"<<numlast<<": "<<novatos[i].get_nombre()<<endl;
            numlast++;
        }
        
        else{
            numlast = numlast + 0;
        }
        
    }
    
    for(int i=0;i<iNacionales;i++){
        
        bool bandera= false;
        
        bandera=nacionales[i].get_lastimado();
        
        if (bandera==true){
            
            
            cout<<"Lastimado #"<<numlast<<": "<<nacionales[i].get_nombre()<<endl;
            numlast++;
        }
        
        else{
            numlast = numlast + 0;
        }
    }
    
    for(int i=0;i<iInternacionales;i++){
        
        bool bandera= false;
        
        bandera=internacionales[i].get_lastimado();
        
        if (bandera==true){
            
            
            cout<<"Lastimado #"<<numlast<<": "<<internacionales[i].get_nombre()<<endl;
            numlast++;
        }
        
        else{
            numlast = numlast + 0;
        }
    }
    
    
}

void equipo::agregaInt(string nom, int ed, float est, bool last, int cont, int año){
    
    internacionales[iInternacionales]=JugadorInternacional(nom,ed,est,last,cont,año);
    iInternacionales++;
}

void equipo::agregaNac(string nom, int ed, float est, bool last, int cont, int año){
    
    nacionales[iNacionales]=JugadorNacional(nom,ed,est,last,cont,año);
    iNacionales++;
}

void equipo::agregaNov(string nom, int ed, float est, bool last, int col, int semes){
    cout<<"_______Agregar Novato_______"<<endl;
    cout<<endl;
    novatos[iNovatos]=JugadorNovato(nom,ed,est,last,col,semes);
    iNovatos++;
}

void equipo::mostrarProspect(){
    
    int opcion;
    
    JugadorNacional p1("Isaac",19,4.8,0,35000,5);
    cout<<"Propecto #1 (Nacional) "<<endl<<p1.toString()<<endl;
    
    JugadorInternacional p2("Jamaal",18,4.9,true,40000,5);
    cout<<"Prospecto #2 (Internacional) "<<endl<<p2.toString()<<endl;
    
    JugadorNovato p3("Jorge",19,4.7,false,65,4);
    cout<<"Prospecto #3 (Novato) "<<endl<<p3.toString()<<endl;
    
    cout<<"Elije el numero del prospecto que deseas agregar"<<endl;
    cin>>opcion;
    
    switch (opcion) {
        case 1:
            cout<<"*Isaac fue añadido al equipo*"<<endl;
            nacionales[iNacionales]=p1;
            iNacionales++;
            break;
        case 2:
            cout<<"*Jamaal fue añadido al equipo*"<<endl;
            internacionales[iInternacionales]=p2;
            iInternacionales++;
            break;
        case 3:
            cout<<"*Jorge fue añadido al equipo*"<<endl;
            novatos[iNovatos]=p3;
            iNovatos++;
            break;
        default:
            cout<<"Elije un numero valido";
            break;
    }
    
}
#endif /* equipo_h */
