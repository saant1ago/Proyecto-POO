//
//  Jugadores.h
//  ProyectoA01705439
//
//  Created by Santiago Juarez Roaro on 08/11/22.
//

#ifndef Jugadores_h
#define Jugadores_h

#include <stdio.h>
#include <string>
#include <sstream>


using namespace std;

//Creamos la clase padre de Jugador
class Jugador{
    
protected: //Protected para que las clases hijas puedan acceder

//Sus atributos serán nombre,edad,estrellas y si esta lastimado o no
    string nombre;
    int edad;
    float estrellas;
    bool lastimado;
    
public:
//Constructor vacio y constructor que si recibe parametros
    Jugador():nombre(""),edad(0),estrellas(0.0),lastimado(false){};
    Jugador(string nom,int ed, float est, bool las):nombre(nom),edad(ed),estrellas(est),lastimado(las){};
//Métodos que permiten acceder a los atributos
    string get_nombre();
    int get_edad();
    float get_estrellas();
    int get_lastimado();
    

};

//Especificamos los métodos como getters

string Jugador::get_nombre(){
    return nombre;
}

int Jugador::get_edad(){
    return edad;
}

float Jugador::get_estrellas(){
    return estrellas;

}

int Jugador::get_lastimado(){
    return lastimado;
}

//No se agregan setters porque no me interesa cambiar los datos de los jugadores una vez ingresados

//______________________Clase hija Jugador Nacional___________________________
class JugadorNacional:public Jugador{//Hereda los atributos y métodos de la clase Jugador
    
private:    //Atributos
    
    int contrato;
    int añosCont;
    
public:
    
    //Constructor default y el que si recibe parámetros
    JugadorNacional():Jugador(),contrato(0),añosCont(0){};
    JugadorNacional(string nom, int ed, float est, bool last, int cont, int año):Jugador(nom,ed,est,last),contrato(cont),añosCont(año){};
    
    //Getters y toString
    int get_contrato();
    int get_gasto();
    string toString();
    int get_años();
};

int JugadorNacional::get_contrato(){
    return contrato;
}

int JugadorNacional::get_gasto(){//Calcula el gasto total del jugador durante la duracion de su contrato
    int total=0;
    
    total=contrato*añosCont;
    
    return total;
}

int JugadorNacional::get_años(){
    return añosCont;
}

string JugadorNacional::toString(){//Guardamos su información en un toString
    stringstream aux;
    
    aux<<"Nombre: "<<get_nombre()<<endl<<"Edad: "<<get_edad()<<endl<<"Estrellas: "<<get_estrellas()<<endl<<"Lastimado: "<<get_lastimado()<<endl<<"Contrato por año: "<<get_contrato()<<endl<<"Duración del contrato: "<<get_años()<<endl;
    return aux.str();
}




//-----------Clase hija jugador internacional----------------
class JugadorInternacional:public Jugador{//Hereda los atributos y métodos de la clase Jugador
    
private:
    
    //Atributos
    int contrato;
    int añosCont;

public:
    
    //Constructor default y el que si recibe parámetros
    JugadorInternacional():Jugador(),contrato(0){};
    JugadorInternacional(string nom, int eda, float est, bool las, int cont, int años):Jugador(nom,eda,est,las),contrato(cont),añosCont(años){};
    
    //Getters y toString
    int get_contrato();
    int get_gasto();
    string toString();
    int get_años();

};
    
int JugadorInternacional::get_contrato(){
    return contrato;
}

int JugadorInternacional::get_gasto(){//Calcula el gasto total del jugador durante la duracion de su contrato
    int total=0;
    
    total=contrato*añosCont;
    
    return total;
}

string JugadorInternacional::toString(){//Guardamos su información en un toString
    stringstream aux;
    
    aux<<"Nombre: "<<get_nombre()<<endl<<"Edad: "<<get_edad()<<endl<<"Estrellas: "<<get_estrellas()<<endl<<"Lastimado: "<<get_lastimado()<<endl<<"Contrato por año: "<<get_contrato()<<endl<<"Duración del contrato: "<<get_años()<<endl;
    return aux.str();
}

int JugadorInternacional::get_años(){
    return añosCont;
}

//----------Clase hija Jugador Novato---------
class JugadorNovato:public Jugador{//Hereda los atributos y métodos de la clase Jugador
    
private:
   
    //Atributos
    int colegiatura;
    int añosRestantes;
    
public:
    
    //Constructor default y el que si recibe parámetros
    JugadorNovato():Jugador(),colegiatura(0), añosRestantes(0){};
    JugadorNovato(string nom, int eda, float est, bool las, int col, int semes):Jugador(nom,eda,est,las),colegiatura(col),añosRestantes(semes){};
    
    
    //Getters y toString
    int get_colXaño();
    int get_gast();
    string toString();
    int get_colegiatura();
    int get_años();
    
    
};

int JugadorNovato::get_colXaño(){//Calcula el gasto de colegiatura por año y lo regresa
    int total = 0;
    int costoAño = 250000;
    
    total= costoAño*(colegiatura/100.0);
    
    return total;
}

int JugadorNovato::get_gast(){//Calcula el gasto total y lo regresa
    int total = 0;
    
    total = get_colXaño()*añosRestantes;
    
    return total;
}

int JugadorNovato::get_colegiatura(){
    return colegiatura;
}

int JugadorNovato::get_años(){
    return añosRestantes;
}

string JugadorNovato::toString(){//Guarda información en un toString
        stringstream aux;
        
        aux<<"Nombre: "<<get_nombre()<<endl<<"Edad: "<<get_edad()<<endl<<"Estrellas: "<<get_estrellas()<<endl<<"Lastimado: "<<get_lastimado()<<endl<<"Porcentaje de beca: "<<get_colegiatura()<<"%"<<endl<<"Años de carrera restantes: "<<get_años()<<endl;
        return aux.str();
}
#endif /* Jugadores_h */

