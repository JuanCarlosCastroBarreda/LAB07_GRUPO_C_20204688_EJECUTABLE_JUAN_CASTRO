#include "disco.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	ClaseMultimedia b(20,"ONE OK ROCK","Rock");
	b.mostrar_m();

	cout<<"\n \n---------------\n";
	
	ClaseDisco a(20,"ONE OK ROCK","Rock", "Re:Make");
	a.mostrar_d();
    return 0;
}