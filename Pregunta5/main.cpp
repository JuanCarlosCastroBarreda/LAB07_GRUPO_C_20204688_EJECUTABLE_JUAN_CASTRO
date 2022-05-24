#include "operacionFactorial.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	operacionFactorial a;
	a.setOperador(10);
	cout<<a.resultado();
    return 0;
}