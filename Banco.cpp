#include "Reposteria.cpp"

#ifndef BANCO_CPP
#define BANCO_CPP
using namespace std;
class Banco: public Edificio{
	public:
	Banco():Edificio("Banco",100,15,40){
	}
	void print(){
		cout<<"Edificio "<<getNombre()<<endl;
	}
	
	bool especial(){
		
	}
};
#endif
