#include <iostream>
#include <string>
using namespace std;
class ClaseMultimedia {
	private:
		float precio;
		string grupo;
		string genero;
	public:
		ClaseMultimedia(int,string, string);
		void mostrar_m();
		~ClaseMultimedia();	
};
ClaseMultimedia::ClaseMultimedia(int _precio,string _grupo, string _genero){
	precio=_precio;
	grupo=_grupo;
	genero=_genero;
}
void ClaseMultimedia::mostrar_m(){
	cout<<"Su Precio es de: "<<precio<<" soles"<<endl;
	cout<<"El Grupo que toca es: "<<grupo<<endl;
	cout<<"Su genero es: "<<genero;
}

ClaseMultimedia::~ClaseMultimedia(){}