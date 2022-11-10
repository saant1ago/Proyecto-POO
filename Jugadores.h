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

using namespace std;

class JugadorNacional{
    
private:
    
    string nombre;
    int edad;
    float estrellas;
    
public:
    
    JugadorNacional():nombre(""),edad(0),estrellas(0.0){};
    JugadorNacional(string nameN,int ageN, float ratingN):nombre(nameN),edad(ageN),estrellas(ratingN){};
    
    string get_nombre();
    int get_edad();
    float get_estrellas();

    
    void set_nombre(string);
    void set_edad(int);
    void set_estrellas(float);
 
    
    
};

string JugadorNacional::get_nombre(){
    return nombre;
}

int JugadorNacional::get_edad(){
    return edad;
}

float JugadorNacional::get_estrellas(){
    return estrellas;
}


void JugadorNacional::set_nombre(string nameN){
    nombre=nameN;
}

void JugadorNacional::set_edad(int ageN){
    edad=ageN;
}
void JugadorNacional::set_estrellas(float ratingN){
    estrellas=ratingN;
}


class JugadorInternacional{
    
private:
    
    string nombre;
    int edad;
    float estrellas;
    int colegiatura;

public:
    JugadorInternacional():nombre(""),edad(0),estrellas(0.0),colegiatura(0.0){};
    JugadorInternacional(string nameI,int ageI, float ratingI, int colegiaturaI):nombre(nameI),edad(ageI),estrellas(ratingI),colegiatura(colegiaturaI){};
    
    string get_nombre();
    int get_edad();
    float get_estrellas();
    int get_colegiatura();
    
    void set_nombre(string);
    void set_edad(int);
    void set_estrellas(float);
    void set_colegiatura(int);
    
};
    
string JugadorInternacional::get_nombre(){
    return nombre;
}
int JugadorInternacional::get_edad(){
    return edad;
}
float JugadorInternacional::get_estrellas(){
    return estrellas;
}
int JugadorInternacional::get_colegiatura(){
    return colegiatura;
}

void JugadorInternacional::set_nombre(string nameI){
    nombre=nameI;
}
void JugadorInternacional::set_edad(int ageI){
    edad=ageI;
}
void JugadorInternacional::set_estrellas(float ratingI){
    estrellas=ratingI;
}
void JugadorInternacional::set_colegiatura(int colegiaturaI){
    colegiatura=colegiaturaI;
}

class JugadorNovato{
    
private:
    string nombre;
    int edad;
    float estrellas;
    int colegiatura;
    
public:
    JugadorNovato():nombre(""),edad(0),estrellas(0.0),colegiatura(0){};
    JugadorNovato(string name, int age, float rating, int beca):nombre(name),edad(age),estrellas(rating),colegiatura(beca){};
    
    string get_nombre();
    int get_edad();
    float get_estrellas();
    int get_colegiatura();
    
    void set_nombre(string);
    void set_edad(int);
    void set_estrellas(float);
    void set_colegiatura(int);
    
};

string JugadorNovato::get_nombre(){
    return nombre;
}

int JugadorNovato::get_edad(){
    return edad;
}

float JugadorNovato::get_estrellas(){
    return estrellas;
}
int JugadorNovato::get_colegiatura(){
    return colegiatura;
}
void JugadorNovato::set_nombre(string name){
    nombre=name;
}
void JugadorNovato::set_edad(int age){
    edad=age;
}
void JugadorNovato::set_estrellas(float rating){
    estrellas=rating;
}
void JugadorNovato::set_colegiatura(int beca){
    colegiatura=beca;
}
#endif /* Jugadores_h */
