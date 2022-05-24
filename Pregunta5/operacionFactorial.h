#include <iostream>
#include <string>
#include "operacionBase.h"

using namespace std;

class operacionFactorial:public operacionBase{
	private:
		int x;
	public:
		int resultado();
};
int operacionFactorial::resultado(){
	x=getOperator();
	int aux=1;
	for(int i=1;i<=x;i++){
		aux=aux*i;
	}
	return aux;
}