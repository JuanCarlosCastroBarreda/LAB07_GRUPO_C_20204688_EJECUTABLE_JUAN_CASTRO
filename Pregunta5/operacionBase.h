#include <iostream>
#include <string>
using namespace std;
class operacionBase{
	private:
		int numero;
	public:
		void setOperador(int);
		int getOperator();
		
};
void operacionBase::setOperador(int _numero){
	numero=_numero;
}
int operacionBase::getOperator(){
	return numero;
}