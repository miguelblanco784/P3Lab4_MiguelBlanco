#include "Reposteria.cpp"


#ifndef TEMPLO_CPP
#define TEMPLO_CPP
using namespace std;
class Templo: public Edificio{
	public:
	Templo():Edificio("Templo",200,30,100){
	}
	void print(){
		cout<<"Edificio "<<getNombre()<<endl;
	}
	
	void agreagrAumento(){
		
	}
	
	bool especial(){
		
	}
};
#endif
