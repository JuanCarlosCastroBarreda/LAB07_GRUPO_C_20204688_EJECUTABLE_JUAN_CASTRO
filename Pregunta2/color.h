#include <string>
#include <iostream>

using namespace std;

class color{
	private:
		int r;
        int g;
        int b;
	public:
		color(int,int,int);
		~color();
		void RGB();
};
color::color(int _r,int _g,int _b){
	r=_r;
	g=_g;
	b=_b;
}
color::~color(){}
void color::RGB(){
	cout<<r<<"/"<<g<<"/"<<b<<" ";
}