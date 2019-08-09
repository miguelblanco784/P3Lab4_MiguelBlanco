#include "Edificio.cpp"


#ifndef GRANJA_CPP
#define GRANJA_CPP
using namespace std;
class Granja: public Edificio{
	public:
		Granja():Edificio("Granja",50,5,15){
			cont = 0;
		}
		
		
		void print(){
			cout<<"Edificio "<<getNombre()<<endl;
		}
		
		bool especial(){
			return true;
		}
};
#endif
