#include <string>
#include <iostream>

using namespace std;

class material{
	private:
		string tipo;
	public:
		material(string);
		~material();
		void material_tipo();
};
material::material(string a){
	tipo=a;
}
material::~material(){}
void material::material_tipo(){
	cout<<tipo;
}