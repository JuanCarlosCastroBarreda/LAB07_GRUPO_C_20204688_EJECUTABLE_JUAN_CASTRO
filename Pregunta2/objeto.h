#include <string>
#include <iostream>
#include "material.h"
#include "color.h"

using namespace std;

class objeto:public color,public material{
	public:
		objeto(int,int,int,string);
		~objeto();
		void mostrar();
};
objeto::objeto(int r,int g,int b,string tipo):color(r,g,b),material(tipo){}
objeto::~objeto(){};

void objeto::mostrar(){
	cout<<"El RGB del objeto es: ";
	RGB();
	cout<<" y esta hecho de: ";
	material_tipo();
}