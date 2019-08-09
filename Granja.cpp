#include "Edificio.cpp"


#ifndef GRANJA_CPP
#define GRANJA_CPP
using namespace std;
class Granja: public Edificio{
	Granja():Edificio("Granja",50,5,15){
	}
	
	void print(){
		cout<<"Edificio "<<getNombre()<<endl;
	}
	
	void aumento(){
		
	}
};
#endif
