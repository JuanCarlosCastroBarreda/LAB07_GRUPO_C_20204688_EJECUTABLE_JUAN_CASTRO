#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;


class Persona{
    private:
        int edad;
        string nombre;
    public:
        void estudia(){
            cout<<"ingrese un nombre: "<<endl;
            getline(cin,nombre);
            cout<<"ingrese una edad: "<<endl;
            cin>>edad;
            cout<<nombre<<" estudia en la UNSA y tiene "<<edad<<" anios"<<endl;
        }
};
class Estudiante: public Persona
{
};

#endif