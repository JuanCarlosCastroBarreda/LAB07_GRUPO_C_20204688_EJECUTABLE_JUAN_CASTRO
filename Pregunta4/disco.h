#include "multimedia.h"
#include <iostream>
#include <string>
using namespace std;

class ClaseDisco : public ClaseMultimedia{
	private:
		string cancion;
	public :
		ClaseDisco(int,string,string,string);
		void mostrar_d();
		~ClaseDisco();
};


ClaseDisco::ClaseDisco(int _precio,string _grupo, string _genero, string _cancion):ClaseMultimedia(_precio, _grupo, _genero){
	cancion=_cancion;
}
void ClaseDisco::mostrar_d(){
	mostrar_m();
	cout<<"\nCancion: "<<cancion<<""<<endl;
}
ClaseDisco::~ClaseDisco()
{
}